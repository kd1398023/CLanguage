#include <stdio.h>
main()
{
	char m;
	printf("‚P•¶Žš“ü—Í? ");
	scanf("%c", &m);

	if (m <= 90 && m >= 65) {
		printf("•ÏŠ·Œ‹‰Ê‚Í %c\n", m + 32);
	}
	else {
		if (m <= 122 && m >= 95) {
			printf("•ÏŠ·Œ‹‰Ê‚Í %c\n", m - 32);
		}
		else {
			printf("%c", m);
		}
	}
}