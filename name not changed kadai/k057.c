#include <Stdio.h>
main()
{
	char m;
	
	printf("�A���t�@�x�b�g������? ");
	scanf("%c", &m);

	for (; m >= 90 && m <= 121; m++) {
		printf("%c ", m - 31);
	}
}