CC		=gcc
DEBUG		=-U Debug
FLAGS		=-g -Wall $(DEBUG)
SOURCES		=printDoubleMatrix.c initCharMatrix.c main.c initDoubleMatrix.c printIntMatrix.c initFloatMatrix.c printStringMatrix.c initIntMatrix.c printCharMatrix.c freeIntMatrix.c freeDoubleMatrix.c freeFloatMatrix.c freeCharMatrix.c freeStringMatrix.c testIntMatrix.c testStringMatrix.c initStringMatrix.c
HEADERS		=matrix.h
OBJECTS		=$(SOURCES:.c=.o)
EXECUTABLE	=matrix
RM		=rm -rf

.SUFFIXES:
.SUFFIXES: .c .o

all: $(EXECUTABLE) $(SOURCES) $(HEADERS)
	
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(FLAGS) $(OBJECTS) -o $@

.c.o:
	$(CC) $(FLAGS) -c $< -o $@
	
clean:
	$(RM) $(EXECUTABLE) *.o *.core core *~
	
