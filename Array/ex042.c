#include<stdio.h>
main()
{
	int i;
	char data[] = "Apple";
	printf("1•¶Žš‚¸‚Â•\Ž¦\n");
	for (i = 0; data[i] != '\0'; i++) {
		printf("%c", data[i]);
	}
	printf("\n•¶Žš—ñ‚Å•\Ž¦\n%s\n", &data[0]);
}