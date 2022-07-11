CC = g++
LFLAGS = -o
CFLAGS = -c -g -Wall -Werror
INC = ./inc
BIN = ./bin
OBJ = ./obj
SRC = ./src

all: $(BIN)/app

$(BIN)/app: $(OBJ)/main.o
	$(CC) $(LFLAGS) $(BIN)/app $(OBJ)/main.o

$(OBJ)/main.o: $(SRC)/main.cpp
	$(CC) $(CFLAGS) $(SRC)/main.cpp 
		mv *.o $(OBJ)
clean:
		rm -f a.out main
		rm -f *.o
		rm -f $(OBJ)/*.o
		rm -f $(BIN)/app
