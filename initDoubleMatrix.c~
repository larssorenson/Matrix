#include "matrix.h"

Matrix* initDoubleMatrix(int rows, int columns, double** elements)
{
	size_t elemSize = sizeof(double);
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
	
		matrix->doubles[x] = malloc(sizeof(elemSize)*columns);
		if(!matrix->doubles[x])
		{
			perror("Matrix Malloc Rows");
			for(x; x > 0; x--)
				free(matrix->doubles[x]);
			free(matrix);
			return NULL;
		}
		
		if(!empty_matrix_flag)
		{
			memcpy(matrix->doubles[x], elements[x], elemSize*columns);
		}
		
		else
		{
			memset(matrix->doubles[x], 0, elemSize*columns);
		}
		
	}
	
	return matrix;
}
