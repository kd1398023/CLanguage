#include <stdio.h>
main()
{
	int a[3], * p,i;
	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("*p+=1...%d\n", *p += 1);
}