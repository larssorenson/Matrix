#include "matrix.h"

void printDoubleMatrix(Matrix* matrix)
{
	if(!matrix)
		return;
	int x;
	int y;
	if(matrix->doubles)
	{
		for(x = 0; x < matrix->rows; x++)
		{
			if(matrix->doubles[x])
			{
				for(y = 0; y < matrix->columns; y++)
				{
					if(matrix->dobules[x][y])
					{
						printf("%f\t", (double)matrix->doubles[x][y]);
					}
				
				}
		
				printf("\r\n");
			}
		
		}
	
	}
	
}
