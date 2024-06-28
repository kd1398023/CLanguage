#include<stdio.h>
main()
{
	int no, sum = 0, cnt = 0;
	printf("®”(-999 ‚ÅI—¹)?");
	scanf("%d", &no);
	while (no != -999) {
		sum += no;
		printf("®”(-999 ‚ÅI—¹)?");
		scanf("%d", &no);
		
		cnt++;
		
	}
	printf("‡Œv = %d\n •½‹Ï = %.2f\n", sum, (float)sum / cnt);
}