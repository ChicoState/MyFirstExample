all:
	g++ -Wno-analyzer-malloc-leak main.cpp

clean:
	rm -f a.out
