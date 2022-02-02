CXX = g++
CXXFLAGS = -O2 -std=c++11
SOURCES = AnaLog.cpp LogReader.cpp 
OBJECTS = $(subst .cpp,.o, $(SOURCES))
EXEC = bin/program

all: $(EXEC)

debug: CXXFLAGS += -DMAP
debug: $(EXEC)

$(EXEC): $(OBJECTS)
	$(CXX) -o $(EXEC) $(OBJECTS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(EXEC)
