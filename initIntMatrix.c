#include "matrix.h"

Matrix* initIntMatrix(int rows, int columns, int** elements)
{
	size_t elemSize = sizeof(int);
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
	
	matrix->ints = malloc(sizeof(int*)*columns);
	if(!matrix->ints)
	{
		perror("Matrix Ints Malloc");
		free(matrix);
		return NULL;
	}
	
	int x;
	for(x = 0; x < rows; x++)
	{
	
		matrix->ints[x] = malloc(sizeof(elemSize)*columns);
		if(!matrix->ints[x])
		{
			perror("Matrix Malloc Rows");
			for(x=x; x > 0; x--)
				free(matrix->ints[x]);
			free(matrix);
			return NULL;
		}
		
		if(!empty_matrix_flag)
		{
			memcpy(matrix->ints[x], elements[x], elemSize*columns);
		}
		
		else
		{
			memset(matrix->ints[x], 0, elemSize*columns);
		}
		
	}
	
	return matrix;
}
