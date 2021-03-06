CC		=gcc
DEBUG		=-U Debug
FLAGS		=-g -Wall $(DEBUG)
SOURCES		=printDoubleMatrix.c initCharMatrix.c initDoubleMatrix.c printIntMatrix.c initFloatMatrix.c printStringMatrix.c initIntMatrix.c printCharMatrix.c freeIntMatrix.c freeDoubleMatrix.c freeFloatMatrix.c freeCharMatrix.c freeStringMatrix.c testIntMatrix.c testStringMatrix.c initStringMatrix.c
HEADERS		=matrix.h
OBJECTS		=$(SOURCES:.c=.o)
EXECUTABLE	=matrix
RM		=rm -rf
LIBRARY		=ar ruv
LIBNAME		=libmatrix.a
LIBRAN		=ranlib

.SUFFIXES:
.SUFFIXES: .c .o

all: $(EXECUTABLE) $(HEADERS) library

library: $(SOURCES) $(HEADERS)
	$(LIBRARY) $(LIBNAME) $(OBJECTS)
	$(LIBRAN) $(LIBNAME)
	$(RM) *.o
	
test: $(EXECUTABLE) $(SOURCES) $(HEADERS) main.c
	
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(FLAGS) $(HEADERS) main.c -o $@ ${LIBNAME}

.c.o:
	$(CC) $(FLAGS) -c $< -o $@
	
clean:
	$(RM) $(EXECUTABLE) *.o *.core core *~
	
