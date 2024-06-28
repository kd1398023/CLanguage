#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{

	int i, w, target, data[20];

	for (i = 0; i < 20; i++) {
		data[i] = i + 1;
	}
	printf("\n------------\n");
	for (i = 0; i < 20; i++) {
		printf("data[%2d] = %2d\n", i, data[i]);
	}

	/*srand(time(0));
	for (i = 0; i < 20; i++) {
		target = rand() % 20;
	
		w = data[target];
		data[target] = data[i];
		data[i] = w;
		
	}*/


	srand(time(0));
	for (i = 19; i > 0; i--) {
		target = rand() % 20;

		w = data[target];
		data[target] = data[i];
		data[i] = w;

	}
	
	printf("\n------------\n");
	for (i = 0; i < 20; i++) {
		printf("data[%2d] = %2d\n", i, data[i]);
	}
}