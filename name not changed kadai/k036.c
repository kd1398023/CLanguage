#include <stdio.h>
main()
{
	int no, no2;
	printf("整数1 ? ");
	scanf("%d", &no);
	printf("整数2 ? ");
	scanf("%d", &no2);

	if (no < no2) {
		printf("%d の方が %d より %d 小さい\n", no2, no, no2 - no);
	}
	else {
		if (no > no2) {

			printf("%d の方が %d より %d 大きい\n", no, no2, no - no2);
		}
	}
}