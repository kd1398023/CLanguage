#include <stdio.h>
main()
{
	int su, su1,i=0;
	
	while (1)
	{
		printf("®”(-999‚ÅI—¹)?");
		scanf("%d", &su);
		printf("®”2(-999‚ÅI—¹)?");
		scanf("%d", &su1);

		if (su == -999 || su1 == -999) {
			break;
		}

		if (su1 == 0) {
			continue;
		}	
		printf("•½‹Ï = %d‚ ‚Ü‚è%d\n", su / su1, su % su1);
	}
	
}
