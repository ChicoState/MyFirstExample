calculator: main.cpp
	g++ -Wall -pedantic -g -std=c++11 -o calculator main.cpp
clean: rm -f calculator
