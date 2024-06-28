#include <stdio.h>
main()
{
	int no, no2;
	printf("®”1 ? ");
	scanf("%d", &no);
	printf("®”2 ? ");
	scanf("%d", &no2);

	if (no < no2) {
		printf("%d ‚Ì•û‚ª %d ‚æ‚è %d ¬‚³‚¢\n", no2, no, no2 - no);
	}
	else {
		if (no > no2) {

			printf("%d ‚Ì•û‚ª %d ‚æ‚è %d ‘å‚«‚¢\n", no, no2, no - no2);
		}
	}
}