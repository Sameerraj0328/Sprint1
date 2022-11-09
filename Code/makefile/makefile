
SRC=src
INCLUDE=include
OBJ=obj
BIN=bin

INCLUDEFLAGS=-I$(INCLUDE)
CPPF= -ansi -c -g -Wall -std=c++11 -DDEBUG $(INCLUDEFLAGS)

main:program.o programread.o main.o
	g++ -o $(BIN)/main $(OBJ)/program.o $(OBJ)/programread.o $(OBJ)/main.o

program.o:$(SRC)/Programmer.cpp
	g++ -o $(OBJ)/program.o $(CPPF) $(SRC)/Programmer.cpp

programread.o:$(SRC)/Programmerread.cpp
	g++ -o $(OBJ)/programread.o $(CPPF) $(SRC)/Programmerread.cpp

main.o: $(SRC)/main.cpp
	g++ -o $(OBJ)/main.o  $(CPPF) $(SRC)/main.cpp

clean:
	echo "cleaning"
	rm -f $(BIN)/main $(OBJ)/program.o $(OBJ)/programread.o $(OBJ)/main.o	
