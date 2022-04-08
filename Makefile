main: main.o funcs.o time.h movie.o
	g++ -o main main.o funcs.o movie.o

tests: tests.o funcs.o time.h movie.o
	g++ -o tests tests.o funcs.o movie.o

funcs.o: funcs.cpp funcs.h time.h movie.h

main.o: main.cpp funcs.h time.h movie.h

movie.o: movie.cpp funcs.h time.h

tests.o: tests.cpp doctest.h funcs.h time.h movie.h

clean:
	rm -f main tests main.o funcs.o tests.o movie.o
