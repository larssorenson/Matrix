#include "matrix.h"

void printStringMatrix(Matrix* matrix)
{
	if(!matrix)
		return;
	int x;
	int y;
	if(matrix->strings)
	{
		for(x = 0; x < matrix->rows; x++)
		{
			if(matrix->strings[x])
			{
				for(y = 0; y < matrix->columns; y++)
				{
					if(matrix->strings[x][y])
					{
						printf("%s\t", matrix->strings[x][y]);
					}
					
				}
		
				printf("\r\n");
			}
			
		}
	
	}
	
}
