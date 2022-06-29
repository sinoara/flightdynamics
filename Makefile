# Compiler
CXX :=g++

CXXFLAGS := -Wall -g

SOURCEDIR := src
BUILDDIR := obj
TESTDIR := tests

TESTLIBLINK := -lgtest


tests: tests.o
	./$(BUILDDIR)/$<

tests.o: obj/system.o
	$(CXX) $(CXXFLAGS) $(TESTDIR)/* $^ -o $(BUILDDIR)/tests.o  $(TESTLIBLINK)

%.o : %.cpp
	$(CXX) $(CXXFLAGS) -c $(SOURCEDIR)/$< -o $(BUILDDIR)/$@
