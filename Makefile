build: main.o person.o personBase.o simulation.o government.o
	g++ *.o -o output
	./output

person.o: person.cc person.h
	g++ -c  person.cc

personBase.o: personBase.cc personBase.h
	g++ -c personBase.cc

main.o: main.cc
	g++ -c  main.cc

simulation.o: simulation.h simulation.cc
	g++ -c simulation.cc

government.o: government.h government.cc
	g++ -c government.cc

clean:
	rm *.o
	rm output
