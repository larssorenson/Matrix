#include "matrix.h"

void freeIntMatrix(Matrix* matrix)
{
	int x;
	for(x = 0; x < matrix->rows; x++)
	{
		free(matrix->ints[x]);
	}
	
	free(matrix->ints);
	free(matrix);
}
