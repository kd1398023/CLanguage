#include <stdio.h>
main()
{
	int su, cnt, sum = 0;

	
	cnt = 0;
	while (1)
	{
		
		printf("®”(-999‚ÅI—¹)?");
		scanf("%d", &su);
		if (su == -999) {
			break;
		}
		if (su < 0) {
			continue;
		}
		cnt++; 
		sum += su;  
		
	}
	printf("‡Œv = %d", sum); 

	printf("•½‹Ï = %.2f", (float)sum / cnt);
}