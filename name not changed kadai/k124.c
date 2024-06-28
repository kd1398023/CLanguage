#include <stdio.h>
main()
{
	char c;
	char* p_c = &c;
	int i = 0;
	//p_c = c;
	printf("‚P•¶Žš“ü—Í? ");
	scanf("%c", &c);
	while (i<1) {
		printf("ŽŸ‚Ì•¶Žš‚Í %c\n", *p_c+1);
		i++;
	}
}