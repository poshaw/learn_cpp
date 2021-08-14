CC=g++
CFLAGS = -Wall -g
OUTPUT_OPTION=-MMD -MP -o $@
LDLIBS=-lm
 
SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)
DEP=$(SRC:.cpp=.d)
 
.PHONY: clean
 
variables: variables.o
 
-include $(DEP)
 
clean:
	rm -f *~ core $(OBJ) $(DEP) variables
