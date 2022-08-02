all: out libshim.so

CC=gcc

libshim.so: shim.c
	$(CC) -shared -fPIC shim.c -o $@ -ldl

out: syscall_test.c
	$(CC) syscall_test.c -o $@

clean:
	rm -f syscall_test *.so out
