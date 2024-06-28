#include <stdio.h>
main()
{
	int i, s;
	int d[11] = { 10,5,30,77,16,3,47,29,37,33,55 };
	
	for (i = 0; i < 10; i++) {
		printf("%02d ", d[i]);
	}
	printf("\n’Tõ’ls‚ð“ü—Í : ");
	scanf("%d", &s);
	
	for (i = 0; s != d[i]; i++) {

	}
	if (i >= 10) {
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½\n");
	}
	else {
		printf("”z—ñ%d”Ô–Ú‚ÉŒ©‚Â‚©‚Á‚½\n", i);
	}

}