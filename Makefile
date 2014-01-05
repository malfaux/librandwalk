CC=cc
AR=ar
INC=-I.
CFLAGS=-Wall -fPIC
LIBS=-lm
.DEFAULT_GOAL := all

TARGETS=randwalk-test librandwalk.a librandwalk.so

randwalk.o: randwalk.c
	$(CC) $(INC) $(CFLAGS) -o $@ -c $<
randwalk-test.o: randwalk-test.c
	$(CC) $(INC) $(CFLAGS) -o $@ -c $<
randwalk-test: randwalk-test.o randwalk.o
	$(CC) -o $@ $^ $(LIBS)

librandwalk.a: randwalk.o
	$(AR) rc $@ $^
librandwalk.so: randwalk.o
	$(CC) -shared -o $@ $^

all: $(TARGETS)

clean:
	/bin/rm -f *.o $(TARGETS)
