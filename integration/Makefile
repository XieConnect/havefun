all:	integration

integration.o: integration.c
	gcc -c integration.c

integration: integration.o
	gcc -o integration integration.o

clean:
	rm *.o integration
