BIN = a.out
SRC = main.cpp
CC = clang++

all: $(BIN)
	./do

$(BIN): $(SRC)
	python $(ROOT_PATH)/expander.py --origname $(SRC) $(SRC)
	$(CC) -std=c++2b -Wall -Wextra combined.cpp -o $(BIN)

precision: $(BIN)
	./precision
