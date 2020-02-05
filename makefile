main: main.o
	g++ -W -pedantic main.cpp -o main

clean:
	rm -f main.o main
