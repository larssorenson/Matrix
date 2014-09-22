#include "matrix.h"

int main(int argc, char** argv)
{
	if(testIntMatrix())
	{
		printf("Int Matrix Test Failed!\r\n");
		return -1;
	}
	
	if(testStringMatrix())
	{
		printf("String Matrix Test Failed!\r\n");
		return -1;
	}
	
	return 0;
}
