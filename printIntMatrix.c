#include "matrix.h"

void printIntMatrix(Matrix* matrix)
{
	if(!matrix)
		return;
	int x;
	int y;
	if(matrix->ints != NULL)
	{
		for(x = 0; x < matrix->rows; x++)
		{
			if(matrix->ints[x] != NULL)
			{
				for(y = 0; y < matrix->columns; y++)
				{
					printf("%d\t", matrix->ints[x][y]);
				}
		
				printf("\r\n");
			}
			
			else
			{
				for(y = 0; y < matrix->columns; y++)
				{
					printf("null\t");
				}
				
				printf("\r\n");
			}
		
		}
	
	}
	
}
