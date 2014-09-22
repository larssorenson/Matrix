#include "matrix.h"

void freeStringMatrix(Matrix* matrix)
{
	int x;
	int y;
	for(x = 0; x < matrix->rows; x++)
		for(y = 0; y < matrix->columns; y++)
			free(matrix->strings[x][y]);
	
	free(matrix->strings);	
	free(matrix);
}
