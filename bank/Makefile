C = g++
CPPFLAGS = -c -Wall
LDFLAGS = -lcppunit -lm
OBJ = obj/
SRC = src/
BIN = bin/
INCLUDE = inc/

all: app

app: $(OBJ)main.o $(OBJ)bank.o
	$(CC) -o app $(OBJ)main.o  $(OBJ)bank.o
		mv app $(BIN) 

$(OBJ)main.o: $(SRC)main.cpp
			$(CC) $(CPPFLAGS) $(SRC)main.cpp -I $(INCLUDE)
				mv main.o $(OBJ)

$(OBJ)bank.o: $(SRC)bank.cpp
					$(CC) $(CPPFLAGS) $(SRC)bank.cpp -I $(INCLUDE)
						mv bank.o $(OBJ)

clean:
						rm -f a.out app *.o
						rm -f $(OBJ)*.o
						rm -f $(BIN)app

