OBJS = Ensemble.o TestEnsemble.o
EXEC = Ensemble

CXXFLAGS = -Wall -Wpedantic -std=c++11

all: $(EXEC)

debug: CXXFLAGS += -g
debug: $(EXEC)

$(EXEC): $(OBJS)
	g++ -o $@ $(OBJS)

test:
	./tests/test.sh tests/$(TEST) || true
	rm tests/$(TEST)/TU*

clean:
	rm -f *.o $(EXEC)
	rm tests/Test*/TU* tests/results.csv
