# Tests
tests: tests.o
	./$(BUILDDIR)/$<

tests.o: system.o
	$(CXX) $(CXXFLAGS) $(TESTDIR)/* $(BUILDDIR)/$^ -o $(BUILDDIR)/tests.o  $(TESTLIBLINK) #-fprofile-arcs -ftest-coverage

%.o : src/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $(BUILDDIR)/$@

clean:
	rm -f obj/*.o *.o
