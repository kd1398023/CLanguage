#include <stdio.h>
main()
{
	int sum, sub, m, d, ia, ib;
	
	printf("2�̐��l?  ");
	scanf("%d  %d", &ia, &ib);
	sum = ia + ib;
	sub = ia - ib;
	m = ia * ib;
	d = ia / ib;

	printf(" %d + %d = %d\n %d - %d = %d\n %d * %d = %d\n %d / %d = %d\n", ia, ib, sum, ia, ib, sub, ia, ib, m, ia, ib, d);
}