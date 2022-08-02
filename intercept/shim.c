#ifndef SHIM_H_
#define SHIM_H_

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <dlfcn.h>


int	rand()
{
	int	(*system_rand)() = dlsym(RTLD_NEXT, "rand");
	return system_rand();
}

#endif
