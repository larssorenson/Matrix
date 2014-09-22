#include "matrix.h"

void printCharMatrix(Matrix* matrix)
{
	if(!matrix)
		return;
	int x;
	int y;
	if(matrix->chars)
	{
		for(x = 0; x < matrix->rows; x++)
		{
			if(matrix->chars[x])
			{
				for(y = 0; y < matrix->columns; y++)
				{
					if(matrix->chars[x][y])
					{
						printf("%c\t", matrix->chars[x][y]);
					}
				
				}
		
				printf("\r\n");
			}
		
		}
	
	}
	
}
