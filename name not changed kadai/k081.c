#include <stdio.h>
main()
{
	int su, cnt, sum = 0;
	printf("®”(-999‚ÅI—¹)?");
	scanf("%d", &su);
	cnt = 0;
	while (1)
	{
		cnt++;
		sum += su;
		printf("®”(-999‚ÅI—¹)?");
		scanf("%d", &su);
		if (su == -999) {
			break;
		}
	}

	
	printf("‡Œv = %d", sum);

	printf("•½‹Ï = %.2f", (float)sum / cnt);
	
}