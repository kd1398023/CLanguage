#include <stdio.h>

struct ken {
	int code;
	char name[20];
	struct ken* next;
};