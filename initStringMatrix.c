#include "matrix.h"

Matrix* initStringMatrix(int rows, int columns, char*** elements)
{
	size_t elemSize = sizeof(char**);
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
	
	matrix->strings = malloc(sizeof(char***));
	
	int x;
	for(x = 0; x < rows; x++)
	{
	
		matrix->strings[x] = malloc(sizeof(elemSize)*columns);
		if(!matrix->strings[x])
		{
			perror("Matrix Malloc Rows");
			for(x = x; x > 0; x--)
				free(matrix->strings[x]);
			free(matrix->strings);
			free(matrix);
			return NULL;
		}
		
		if(!empty_matrix_flag)
		{
			int y;
			for(y = 0; y < columns; y++)
			{
				matrix->strings[x][y] = malloc(sizeof(char)*strlen(elements[x][y]));
				if(!matrix->strings[x][y])
				{
					perror("Malloc Strings Column");
					for(x = x; x > 0; x--)
						free(matrix->strings[x]);
					free(matrix->strings);
					free(matrix);
					return NULL;
					
				}
				
				strncpy(matrix->strings[x][y], elements[x][y], strlen(elements[x][y]));
			}
		}
		
		else
		{
			memset(matrix->strings[x], 0, elemSize*columns);
		}
		
	}
	
	return matrix;
}
