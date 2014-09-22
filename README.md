Matrix
======

Matrix library for C, supporting Strings, Doubles/Floats, Integers, and Chars.

This library will eventually support longs, long longs, signed vs unsigned, etc.

Note: Char Matrix is a matrix where each cell is a character, String Matrix is a matrix where each cell is a string (char*).
	Thus, when making a String Matrix you must provide a char***, where as with a Char Matrix you only need a char**.

Compilation
===========
	make
	
Usage
=====
	#include "matrix.h"
	
	Int Matrix Functions:
		- initIntMatrix(int rows, int columns, int** elements)
		- printIntMatrix(Matrix*)
		- freeIntMatrix(Matrix*)
		
	String Matrix Functions:
		- initStringMatrix(int rows, int columns, char*** elements)
		- printStringMatrix(Matrix*)
		- freeStringMatrix(Matrix*)
		
	And similarly for the other two.
	
	Double/Floats and Char matrices are not fully functional yet.
	
Future
======
	Add support for more types
	Add functions for matrix multiplications, diagonalization, orthonormalization, addition, etc etc for numeric type matrices
