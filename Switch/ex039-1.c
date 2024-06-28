#include <stdio.h>
main()
{
	char f;
	int d1, d2, d3;

	printf("ˆ—‚ğ“ü—Í : ");
	scanf("%c", &f);

	printf("®”‚ğ“ü—Í : ");
	scanf("%d%d%d", &d1, &d2, &d3);

	switch (f)
	{
	case 'd':
	case 'D':
		if (d1 > d2) {
			if (d1 > d3) {
				printf("Å‘å’l‚Í%d‚Å‚·\n", d1);
			}
			else
			{
				printf("Å‘å’l‚Í%d‚Å‚·\n", d3);
			}
		}
		else {

		}
		
	}
}