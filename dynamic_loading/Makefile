CC=gcc


all: libmath.so libwork.so out

libwork.so: libwork.c
	$(CC) -fPIC -shared libwork.c -o $@

libmath.so: libmath.c
	$(CC) -fPIC -shared libmath.c -o $@

out: testlib.c
	$(CC) testlib.c -o $@
clean:
	rm -f out *.so
