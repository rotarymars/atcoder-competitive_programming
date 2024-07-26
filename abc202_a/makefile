SRC = ./main.cpp
BIN = ./a.out
DEBUG_BIN = ./debug.out
SAMPLE = ./test/sample-0.in
all: $(BIN) $(SAMPLE)
	bash ./test-sample.sh $(BIN) $(SRC)
debugall: $(DEBUG_BIN) $(SAMPLE)
	bash ./test-sample.sh $(DEBUG_BIN) $(SRC)
$(BIN): $(SRC)
	clang++ -std=gnu++2b -O2 -I../ -o $(BIN) $(SRC)
$(DEBUG_BIN): $(SRC)
	clang++ -std=gnu++2b -O2 -I../ -D_DEBUG -o $(DEBUG_BIN) $(SRC)
$(SAMPLE):
	python ../download.py
pythontest: main.py $(SAMPLE)
	bash ./test-sample.sh 'python main.py' main.py
