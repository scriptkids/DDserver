
CC = gcc
CPP = gcc -E

SOURCES = main.c utils.c
OBJS = $(SOURCES:.c=.o)


dd:$(OBJS)
	$(CC) -o $@ $^

clean:
	rm *.o

.depend:
	$(CPP) -MM $(SOURCES) > .depend

depend:
	rm -f .depend
	$(MAKE) .depend

include .depend
