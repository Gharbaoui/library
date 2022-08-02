all: out libshim.so

CC=gcc

FLAGS=-g

libshim.so: shim.c
	$(CC) $(FLAGS) -shared -fPIC shim.c -o $@ -ldl

out: syscall_test.c
	$(CC) -g syscall_test.c -o $@
clean:
	rm -f syscall_test *.so out
