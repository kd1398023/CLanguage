#include<stdio.h>
main()
{
	int i;
	char data[] = "Apple";
	printf("1�������\��\n");
	for (i = 0; data[i] != '\0'; i++) {
		printf("%c", data[i]);
	}
	printf("\n������ŕ\��\n%s\n", &data[0]);
}