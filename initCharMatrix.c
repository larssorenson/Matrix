#include "matrix.h"

Matrix* initCharMatrix(int rows, int columns, char** elements)
{
	size_t elemSize = sizeof(char);
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
	
		matrix->chars[x] = malloc(sizeof(elemSize)*columns);
		if(!matrix->chars[x])
		{
			perror("Matrix Malloc Rows");
			for(x=x; x > 0; x--)
				free(matrix->chars[x]);
			free(matrix);
			return NULL;
		}
		
		if(!empty_matrix_flag)
		{
			memcpy(matrix->chars[x], elements[x], elemSize*columns);
		}
		
		else
		{
			memset(matrix->chars[x], 0, elemSize*columns);
		}
		
	}
	
	return matrix;
}
