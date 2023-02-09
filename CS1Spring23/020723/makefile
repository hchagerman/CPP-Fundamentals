CXX = g++

CXXFLAGS = -c -g -Wall -std=c++17

PROGRAM = 1.exe

CPPFILES = 1.cpp

all:
	$(CXX) $(CXXFLAGS) $(CPPFILES)
	$(CXX) -o $(PROGRAM) *.o

run:
	./$(PROGRAM)

clean:
	rm -f $(PROGRAM) *.o *.out