#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef TRUE
	#define TRUE 1
#endif

#ifndef FALSE
	#define FALSE 0
#endif

struct Matrix
{
	int rows;
	int columns;
	union
	{
		int ** ints;
		char ** chars;
		double ** doubles;
		float ** floats;
		char *** strings;
	};
};

typedef struct Matrix Matrix;

Matrix* initIntMatrix(int rows, int columns, int** elements);
Matrix* initCharMatrix(int rows, int columns, char** elements);
Matrix* initDoubleMatrix(int rows, int columns, double** elements);
Matrix* initFloatMatrix(int rows, int columns, float** elements);
Matrix* initStringMatrix(int rows, int columns, char*** elements);
void printStringMatrix(Matrix* matrix);
void printIntMatrix(Matrix* matrix);
void printDoubleMatrix(Matrix* matrix);
void printCharMatrix(Matrix* matrix);
void printFormatMatrix(Matrix* matrix, char* format);
void freeCharMatrix(Matrix* matrix);
void freeDoublesMatrix(Matrix* matrix);
void freeFloatsMatrix(Matrix* matrix);
void freeIntMatrix(Matrix* matrix);
void freeStringMatrix(Matrix* matrix);
int testIntMatrix();
int testStringMatrix();
