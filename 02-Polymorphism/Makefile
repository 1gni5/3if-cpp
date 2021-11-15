OBJS = Trajet.o TestTrajet.o
EXEC = Trajets

CXXFLAGS = -Wall -Wpedantic -pedantic -std=c++11 -ansi
CC = g++

all: $(EXEC)

debug: CXXFLAGS += -g
debug: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) -o $@ $(OBJS)

clean:
	rm -f *.o $(EXEC)
