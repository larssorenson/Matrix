#include "matrix.h"

void freeFloatsMatrix(Matrix* matrix)
{
	int x;
	for(x = 0; x < matrix->rows; x++)
	{
		free(matrix->floats[x]);
	}
	
	free(matrix->floats);
	free(matrix);
}
