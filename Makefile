tests: tests.o
	./bin/tests.o

tests.o:
	g++ tests/test_vehicle.cpp -o bin/tests.o -lgtest
