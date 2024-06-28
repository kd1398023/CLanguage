#include<stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int i,k[19];
	char s[20];
	srand(time(0));
	
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ ");
	scanf("%s", &s);

	for (i = 0; s[i] != '\0'; i++) {
		k[i] = rand() % 5 ;
		s[i]+=k[i];
	}
	printf("ˆÃ†‰»•¶š—ñ‚Í= %s \n", s);
	printf("ˆÃ†‰»ƒL[=");
	for (i = 0; s[i] != '\0'; i++) {
		printf(" %d ", k[i]);
	}

}