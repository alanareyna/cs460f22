P1.out : Project1.o SetLimits.o LexicalAnalyzer.o SyntacticalAnalyzer.o
	g++ -g -o P1.out Project1.o SetLimits.o LexicalAnalyzer.o SyntacticalAnalyzer.o

Project1.o : Project1.cpp SetLimits.h SyntacticalAnalyzer.h
	g++ -g -c Project1.cpp

SetLimits.o : SetLimits.cpp SetLimits.h
	g++ -g -c SetLimits.cpp

LexicalAnalyzer.o : LexicalAnalyzer.cpp LexicalAnalyzer.h
	g++ -g -c LexicalAnalyzer.cpp

SyntacticalAnalyzer.o : SyntacticalAnalyzer.cpp SyntacticalAnalyzer.h LexicalAnalyzer.h
	g++ -g -c SyntacticalAnalyzer.cpp

clean : 
	rm *.o P1.out *.gch

submit : Project1.cpp LexicalAnalyzer.h LexicalAnalyzer.cpp SyntacticalAnalyzer.h SyntacticalAnalyzer.cpp makefile README.txt
	rm -rf ReynaAP1
	mkdir ReynaAP1
	cp Project1.cpp ReynaAP1
	cp LexicalAnalyzer.h ReynaAP1
	cp LexicalAnalyzer.cpp ReynaAP1
	cp SyntacticalAnalyzer.h ReynaAP1
	cp SyntacticalAnalyzer.cpp ReynaAP1
	cp makefile ReynaAP1
	cp README.txt ReynaAP1
	tar cfvz ReynaAP1.tgz ReynaAP1
	cp ReynaAP1.tgz ~tiawatts/cs460drop
