cows: cows.o
	g++ -o cows cows.o
cows.o: cows.cpp
	g++ -c cows.cpp
