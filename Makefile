all: libmycode.so shared static

CC=gcc
CFLAGS=-Wall

libmycode.so: libmycode.c
	$(CC) $(CFLAGS) -shared -fPIC -o $@ libmycode.c

shared: test.c
	$(CC) $(CFLAGS) test.c -L. -lmycode -o $@


libmycode.o: libmycode.c
	$(CC) $(CFLAGS) -c libmycode.c -o $@


libstatic.a: libmycode.o
	ar rcs libstatic.a libmycode.o
static: libstatic.a
	$(CC) $(CFLAGS) test.c -L. -lstatic -o $@


clean:
	rm -f shared libmycode.so  static libstatic.a libmycode.o
