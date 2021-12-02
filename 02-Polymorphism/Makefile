CXX = clang++
CXXFLAGS = -Wall -Wpedantic -pedantic -std=c++11 -ansi
SOURCES = Tests.cpp Trajet.cpp TrajetSimple.cpp TestTrajetSimple.cpp Cellule.cpp \
TestCellule.cpp ListeChainee.cpp TestListeChainee.cpp TrajetCompose.cpp TestTrajetCompose.cpp \
Catalogue.cpp TestCatalogue.cpp
OBJECTS = $(subst .cpp,.o, $(SOURCES))
EXEC = Trajets

all: $(EXEC)

debug: CXXFLAGS += -g -DMAP
debug: $(EXEC)

$(EXEC): $(OBJECTS)
	$(CXX) -o $(EXEC) $(OBJECTS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(EXEC)

.PHONY: clean debug all