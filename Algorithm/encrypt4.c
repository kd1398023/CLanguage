#include<stdio.h>
main()
{
	int i,n;
	char s[21];
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ ");
	scanf("%s", &s);

	for (i = 0; s[i] != '\0'; i++) {
		printf("s[%d]‚Ì•¡‡‰»ƒL[>", i);
		scanf("%d", &n);
		s[i] = s[i] - n;


	}
	printf("ˆÃ†‰»•¶š—ñ‚Í= %s ", s);


}