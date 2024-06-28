#include <stdio.h>
main()
{
	int a, ret, cnt= 0; //return
	int k = 0;

	printf("®”: ");
	for (; scanf("%d", &a) != EOF;) {
	k += a;
	cnt++ ;
	printf("®” : ");

}


	/*printf("®”: ");
	while (scanf("%d", &a) != EOF) {
		k += a;
		cnt++ ;
		printf("®” : ");

	}*/
	
	/*printf("®” : ");
	ret = scanf("%d", &a);

	while (ret != EOF) {
		k += a;
		cnt++;
		printf("®” : ");
		ret = scanf("%d", &a);
	}*/
	printf("‡Œv = %d\t •½‹Ï = %.2f\n", k, (float)k / cnt);

}