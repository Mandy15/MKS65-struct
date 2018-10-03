all: tester.o
	gcc -o test tester.o

tester.c: tester.c
	gcc -c tester.c

clean:
	rm test *.o

run:
	./test
