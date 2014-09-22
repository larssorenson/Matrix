#include "matrix.h"

void freeCharMatrix(Matrix* matrix)
{
	int x;
	for(x = 0; x < matrix->rows; x++)
	{
		free(matrix->chars[x]);
	}
	
	free(matrix->chars);
	free(matrix);
}
