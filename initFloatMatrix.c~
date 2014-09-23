#include "matrix.h"

Matrix* initFloatMatrix(int rows, int columns, float** elements)
{
	size_t elemSize = sizeof(float);
	if(rows == 0 || columns == 0 || elemSize == 0)
	{
		perror("Incorrect Parameters To initMatrix!");
		return NULL;
	}
	
	Matrix* matrix = malloc(sizeof(Matrix));
	
	if(!matrix)
	{
		perror("Matrix Malloc");
		return NULL;
	}
	
	int empty_matrix_flag = FALSE;
	
	if(!elements)
	{
		empty_matrix_flag = TRUE;
	}
	
	matrix->rows = rows;
	matrix->columns = columns;
	
	int x;
	for(x = 0; x < rows; x++)
	{
	
		matrix->floats[x] = malloc(sizeof(elemSize)*columns);
		if(!matrix->floats[x])
		{
			perror("Matrix Malloc Rows");
			for(x; x > 0; x--)
				free(matrix->floats[x]);
			free(matrix);
			return NULL;
		}
		
		if(!empty_matrix_flag)
		{
			memcpy(matrix->floats[x], elements[x], elemSize*columns);
		}
		
		else
		{
			memset(matrix->floats[x], 0, elemSize*columns);
		}
		
	}
	
	return matrix;
}
