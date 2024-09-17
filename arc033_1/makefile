SRC = ./main.cpp
BIN = ./a.out
DEBUG_BIN = ./debug.out
SAMPLE = ./test/sample-1.in
all: $(BIN) $(SAMPLE)
	python ../expand.py
	clang-format tmp.cpp > a.cpp
	oj t -t 10 && oj s --wait=0 --yes -l 5031 a.cpp
precisiontest: $(BIN) $(SAMPLE)
	python ../expand.py
	clang-format tmp.cpp > a.cpp
	oj t -e 0.00001 -t 10 && oj s --wait=0 --yes -l 5031 a.cpp
debugtest: $(DEBUG_BIN) $(SAMPLE)
	oj t -c './debug.out' -t 10
$(BIN): $(SRC)
	clang++ -std=gnu++2b -O2 -I../ -o $(BIN) $(SRC)
$(DEBUG_BIN): $(SRC)
	clang++ -std=gnu++2b -O2 -I../ -D_DEBUG -o $(DEBUG_BIN) $(SRC)
$(SAMPLE):
	python ../download.py
pythontest: main.py $(SAMPLE)
	oj t -t 10 -c 'python main.py' && oj s --wait=0 --yes  -l 5055 main.py
pythontestprecision: main.py $(SAMPLE)
	oj t -e 0.00001 -t 10 -c 'python main.py' && oj s --wait=0 --yes -l 5055 main.py
rubytest: main.rb $(SAMPLE)
	oj t -t 10 -c 'ruby main.rb' && oj s --wait=0 --yes  -l 5018 main.rb
rubytestprecision: main.rb $(SAMPLE)
	oj t -e 0.00001 -t 19 -c 'ruby main.rb' && oj s --wait=0 --yes -l 5018 main.rb
