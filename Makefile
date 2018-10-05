build: main.o person.o personBase.o
	g++ main.o personBase.o  person.o -o output
	./output

person.o: person.cc person.h
	g++ -c  person.cc

personBase.o: personBase.cc personBase.h
	g++ -c personBase.cc

main.o: main.cc
	g++ -c  main.cc


clean:
	rm *.o
	rm output
