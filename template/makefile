CXX=g++
CXXFLAGS=-Wall -Wextra -pedantic -std=c++20
EXE=app

SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)

.PHONY: clean

all: $(EXE)

$(EXE): $(OBJ)
	@$(CXX) -o $@ $(OBJ)

depend: .depend

.depend: $(SRC)
	@-rm -f ./.depend
	@$(CXX) $(CXXFLAGS) -MM $^>>./.depend

clean:
	rm -f *~ core $(OBJ) $(EXE) .depend

include .depend
