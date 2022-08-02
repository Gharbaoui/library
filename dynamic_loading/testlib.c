#include <stdio.h>
#include <stdlib.h>
 #include <dlfcn.h>


int	main(int ac, char **av)
{
	if (ac < 4)
	{
		printf("please enter library name and number, number\n");
		exit(1);
	}

	char	*libname = av[1];
	int		a = atoi(av[2]);
	int		b = atoi(av[3]);

	char	*libhandel = dlopen(libname, RTLD_LAZY);
	if (!libhandel)
		return 1;
	int	(*sub)(int, int);

	sub = dlsym(libhandel, "my_sub");

	printf("%d - %d = %d\n", a, b ,sub(a, b));
	dlclose(libhandel);
}
