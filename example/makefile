all: main
main: main.o evaluator.o parser.o
	g++ main.o parser.o evaluator.o -o main 
main.o: main.cpp
	g++ -c -std=c++11 main.cpp
parser.o: parser.cpp
	g++ -c -std=c++11 -o parser.o parser.cpp
evaluator.o: evaluator.cpp
	g++ -c -std=c++11 -o evaluator.o evaluator.cpp
clean:
	rm *.o
	rm main
