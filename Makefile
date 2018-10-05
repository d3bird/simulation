build: main.o person.o
	g++ main.o person.o -o output
	./output
person.o: person.cc person.h
	g++ -c  person.cc

main.o: main.cc
	g++ -c  main.cc


clean:
	rm *.o
	rm output
