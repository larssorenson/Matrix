#include "matrix.h"

void printIntMatrix(Matrix* matrix)
{
	if(!matrix)
		return;
	int x;
	int y;
	if(matrix->ints)
	{
		for(x = 0; x < matrix->rows; x++)
		{
			if(matrix->ints[x])
			{
				for(y = 0; y < matrix->columns; y++)
				{
					if(matrix->ints[x][y])
					{
						printf("%d\t", matrix->ints[x][y]);
					}
				
				}
		
				printf("\r\n");
			}
		
		}
	
	}
	
}
