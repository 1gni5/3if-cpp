OBJS = Ensemble.o TestEnsemble.o
EXEC = Ensemble

CXXFLAGS = -Wall -Wpedantic -std=c++11

all: $(EXEC)

debug: CXXFLAGS += -g
debug: $(EXEC)

$(EXEC): $(OBJS)
	g++ -o $@ $(OBJS)

clean:
	rm -f *.o $(EXEC)

