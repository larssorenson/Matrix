#include "matrix.h"

int testIntMatrix()
{
	printf("Begin Int Matrix Test\r\n");
	int **elements = malloc(sizeof(int*)*4);
	if(!elements)
	{
		printf("Failed to malloc space for elements matrix!\r\n");
		return -1;
	}
	
	int x;
	for(x = 0; x < 4; x++)
	{
		elements[x] = malloc(sizeof(int)*4);
		int y;
		for(y = 0; y < 4; y++)
		{
			elements[x][y] = x+y;
		}
		
	}
	
	Matrix* matrix = initIntMatrix(3, 4, elements);
	if(!matrix)
	{
		printf("Failed to create matrix!\r\n");
	}
	
	printIntMatrix(matrix);
	freeIntMatrix(matrix);
	
	printf("End Int Matrix Test\r\n");
	
	return 0;
}
