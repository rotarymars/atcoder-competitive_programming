BIN = a.out
SRC = main.cpp
CC = clang++

all: $(BIN)
	./do

$(BIN): $(SRC)
	$(CC) -std=c++2b -g -Wall -Wextra $(SRC) -o $(BIN)

precision: $(BIN)
	./precision
