# Compiler
CXX :=g++

CXXFLAGS := -Wall -g

SOURCEDIR := src
BUILDDIR := obj
TESTDIR := tests

TESTLIBLINK := -lgtest


tests: tests.o
	./$(BUILDDIR)/$<

tests.o: system.o
	$(CXX) $(CXXFLAGS) $(TESTDIR)/* $(BUILDDIR)/$^ -o $(BUILDDIR)/tests.o  $(TESTLIBLINK)

#system.o: src/system.cpp
	#$(CXX) $(CXXFLAGS) -c $< -o $(BUILDDIR)/$@

%.o : src/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $(BUILDDIR)/$@

clean:
	rm -f obj/*.o *.o
