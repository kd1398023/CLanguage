#include <stdio.h>
main()
{
	int ia; 
	
	printf("整数? ");
	scanf("%ld", &ia);
	printf(" 2倍すると %ld\n 3倍すると %ld\n 4倍すると %ld\n", 2 * ia, 3 * ia, 4 * ia);
	
}