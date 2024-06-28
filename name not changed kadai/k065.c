#include <stdio.h>
main()
{
	int i, sum = 0, cnt;
	i = 0; 
	cnt = 0; 
	printf("®”(-999‚ÅI—¹)?");
	scanf("%d", &i);
	
	do
	{
		sum += i; 
		cnt++; 
		printf("®”(-999‚ÅI—¹)?");
		scanf("%d", &i);
		
	
	} while (i != -999);
	printf("‡Œv = %d", sum);

	printf("•½‹Ï = %.2f", (float)sum / cnt);

}