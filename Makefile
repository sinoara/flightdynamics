# Compiler
CXX 		= g++

# Build flags
CXXFLAGS 	= -Wall -g

TESTLIBLINK = -lgtest

# Directories
SOURCEDIR 	= src
BUILDDIR 	= obj
TESTDIR 	= tests


tests: tests.o
	./$(BUILDDIR)/$<

tests.o: system.o
	$(CXX) $(CXXFLAGS) $(TESTDIR)/* $(BUILDDIR)/$^ -o $(BUILDDIR)/tests.o  $(TESTLIBLINK) #-fprofile-arcs -ftest-coverage

#system.o: src/system.cpp
	#$(CXX) $(CXXFLAGS) -c $< -o $(BUILDDIR)/$@

%.o : src/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $(BUILDDIR)/$@

clean:
	rm -f obj/*.o *.o
