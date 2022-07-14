CC = g++
LFLAGS = -o
CFLAGS = -c -g -Wall -Werror
INC = inc
BIN = bin
OBJ = ./obj
SRC = ./src

all: app

app: $(OBJ)/main.o 
	$(CC) $(LFLAGS) $(BIN)/app $(OBJ)/main.o
	mv app $(BIN)

$(OBJ)/main.o: $(SRC)/main.cpp
	$(CC) $(CFLAGS) $(SRC)/main.cpp -I$(INC)
		mv *.o $(OBJ)

clean:
		rm -f a.out main
		rm -f *.o
		rm -f $(OBJ)/*.o
		rm -f $(BIN)/app
