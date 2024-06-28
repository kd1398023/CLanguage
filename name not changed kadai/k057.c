#include <Stdio.h>
main()
{
	char m;
	
	printf("アルファベット小文字? ");
	scanf("%c", &m);

	for (; m >= 90 && m <= 121; m++) {
		printf("%c ", m - 31);
	}
}