#include <stdio.h>
main()
{
	int a = 100, b = 200,k;
	int*p_a, *p_b;
	
	printf("実行前 : a = %d\t b = %d\n", a, b);

	p_a = &a;
	p_b = &b;
	k = *p_a;
	*p_a = *p_b;
	*p_b = k;
	printf("実行後 : a = %d\t b = %d\n", a, b);

}