#include <stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int g;
	srand(time(0));
	g = rand() % 100 + 1;

	if (g >= 50) {
		printf("��\n");
	}
	else {
		if (g <= 49 && g >= 20) {
			printf("����\n");
	}
		else {
			if (g <= 19 && g >= 6) {
				printf("������\n");
			}
			else {
				if (g >= 2) {
					printf("��������\n");
				}
				else {
					printf("����������\n");
				}
			}
	
	}
	
	}



}