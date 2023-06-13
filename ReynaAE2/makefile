calc : RoomData.o calculator.o
	g++ -o calc RoomData.o calculator.o

RoomData.o : RoomData.h RoomData.cpp
	g++ -c RoomData.cpp

calculator.o : RoomData.h calculator.cpp
	g++ -c calculator.cpp

calcD : RoomDataD.o calculatorD.o
	g++ -o calcD RoomDataD.o calculatorD.o

RoomDataD.o : RoomData.h RoomData.cpp
	g++ -g -c -DDEBUG -o RoomDataD.o RoomData.cpp

calculatorD.o : RoomData.h calculator.cpp
	g++ -g -c -DDEBUG -o calculatorD.o calculator.cpp

clean :
	rm -rf calc calcD *.o
