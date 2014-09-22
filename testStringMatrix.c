#include "matrix.h"

int testStringMatrix()
{
	printf("Begin String Matrix Test\r\n");
	char ***elements = malloc(sizeof(char**)*4);
	if(!elements)
	{
		printf("Failed to malloc space for elements matrix!\r\n");
		return -1;
	}
	
	int x;
	for(x = 0; x < 4; x++)
	{
		elements[x] = malloc(sizeof(char*)*4);
		int y;
		for(y = 0; y < 4; y++)
		{
			elements[x][y] = "This is a Test";
		}
		
	}
	
	Matrix* matrix = initStringMatrix(3, 4, elements);
	if(!matrix)
	{
		printf("Failed to create matrix!\r\n");
	}
	
	printStringMatrix(matrix);
	freeStringMatrix(matrix);
	
	printf("End String Matrix Test\r\n");
	
	return 0;
}
