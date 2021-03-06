Matrix
======

Matrix library for C, supporting Strings, Doubles/Floats, Integers, and Chars.

This library will eventually support longs, long longs, signed vs unsigned, etc.

Note: Char Matrix is a matrix where each cell is a character, String Matrix is a matrix where each cell is a string (char*).
	Thus, when making a String Matrix you must provide a char***, where as with a Char Matrix you only need a char**.
	
All Matrix operations should qualify as vector implementations, when implemented, as well. Simply create a 1 dimensional matrix.

Compilation
===========
	make library
		- Compiles everything into a library file, named libmatrix.a
	make test
		- Compiles everything into a library file, then compiles main.c with it.
			this can be run by typing ./matrix, which will test the functionality.
	make all
		- Same as make test
	
	make clean
		- Removes all .o files, the test file, and any ~ files.
	
Usage
=====
	#include "matrix.h"
	
	and in whatever compilation, just include libmatrix.a as an object file.
	
	Note: Behaviour is undefined for irregularly sized matrices. Meaning, if you declare
		3 columns and 4 rows, you must supply 12 elements or the matrix may be malformed.
	
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
