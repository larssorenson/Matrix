#include "matrix.h"

void freeDoublesMatrix(Matrix* matrix)
{
	int x;
	for(x = 0; x < matrix->rows; x++)
	{
		free(matrix->doubles[x]);
	}
	
	free(matrix->doubles);
	free(matrix);
}
