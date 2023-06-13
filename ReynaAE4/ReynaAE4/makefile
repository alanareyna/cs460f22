Ex4.exe : Exercise4.o rational.o
	g++ -o Ex4.exe Exercise4.o rational.o

rational.o : rational.h rational.cpp
	g++ -c rational.cpp

Exercise4.o : rational.h Exercise4.cpp
	g++ -c Exercise4.cpp

clean :
	rm -rf *.exe *.o *.tmp *.diff 4grep


