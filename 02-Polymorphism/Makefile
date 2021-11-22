OBJS = Trajet.o TestTrajet.o TrajetSimple.o Cellule.o ListeChainee.o TrajetCompose.o
EXEC = Trajets

CXXFLAGS = -Wall -Wpedantic -pedantic -std=c++11 -ansi
CC = clang++

all: $(EXEC)

debug: CXXFLAGS += -g -DMAP=1
debug: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) -o $@ $(OBJS)

clean:
	rm -f *.o $(EXEC)
