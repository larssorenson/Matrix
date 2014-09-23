#include "matrix.h"

int testIntMatrix()
{
	printf("Begin Int Matrix Test\r\n");
	printf("-------- Test 1 -------- \r\n");
	printf("Input Matrix:\r\n");
	int **elements = malloc(sizeof(int*)*4);
	if(!elements)
	{
		printf("Failed to malloc space for elements matrix!\r\n");
		return -1;
	}
	
	int x;
	int y;
	for(x = 0; x < 4; x++)
	{
		elements[x] = malloc(sizeof(int)*4);
		for(y = 0; y < 4; y++)
		{
			elements[x][y] = x+y;
			printf("%d\t", elements[x][y]);
		}
		
		printf("\r\n");
		
	}
	
	printf("Output Matrix:\r\n");
	
	Matrix* matrix = initIntMatrix(4, 4, elements);
	if(!matrix)
	{
		printf("Failed to create matrix!\r\n");
	}
	
	printIntMatrix(matrix);
	freeIntMatrix(matrix);
	for(x = 0; x < 4; x++)
	{
		free(elements[x]);
		
	}
	
	free(elements);
	
	printf("\r\n-------- Test 2-------- \r\n");
	
	elements = malloc(sizeof(int*)*4);
	if(!elements)
	{
		printf("Failed to malloc space for elements matrix!\r\n");
		return -1;
	}
	
	for(x = 0; x < 4; x++)
	{
	
		elements[x] = malloc(sizeof(int)*4);
		for(y = 0; y < 2; y++)
		{
			elements[x][y] = x+y;
		}
		
	}
	
	matrix = initIntMatrix(4, 4, elements);
	if(!matrix)
	{
		printf("Failed to create matrix!\r\n");
	}
	
	printIntMatrix(matrix);
	freeIntMatrix(matrix);
	
	
	printf("End Int Matrix Test\r\n");
	
	return 0;
}
