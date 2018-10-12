build: main.o person.o personBase.o simulation.o 
	g++ *.o -o output
	./output

person.o: person.cc person.h
	g++ -c -I./working person.cc

personBase.o: personBase.cc personBase.h
	g++ -c -I./working personBase.cc

main.o: main.cc
	g++ -c -I./working main.cc

simulation.o: simulation.h simulation.cc
	g++ -c -I./workInProgress simulation.cc

government.o: government.h government.cc
	g++ -c -I./workInProgress government.cc

debug: main.o person.o simulation.o 
	g++ *.o -g -o debug

clean:
	rm *.o
	rm output
