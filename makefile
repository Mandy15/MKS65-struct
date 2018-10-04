all: tester.o
	gcc -o tester tester.o

tester.o: tester.c
	gcc -c tester.c

clean:
	rm tester *.o

run:
	./test
