DOCTEST = test.o
MAIN = main.o 
CXXFLAGS = -g3
LDFLAGS =
CXX = g++
EXECUTE = test main
main: $(MAIN)
	$(CXX) -g -o main $(MAIN)

test: $(DOCTEST)
	$(CXX) -g -o test $(DOCTEST)

main.o: main.cc

test.o: test.cc doctest.h word.h

clean:
	rm -f $(DOCTEST) $(EXECUTE)