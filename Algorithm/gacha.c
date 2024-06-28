#include <stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int g;
	srand(time(0));
	g = rand() % 100 + 1;

	if (g >= 50) {
		printf("š\n");
	}
	else {
		if (g <= 49 && g >= 20) {
			printf("šš\n");
	}
		else {
			if (g <= 19 && g >= 6) {
				printf("ššš\n");
			}
			else {
				if (g >= 2) {
					printf("šššš\n");
				}
				else {
					printf("ššššš\n");
				}
			}
	
	}
	
	}



}