#include <stdio.h>
#include<stdlib.h>
#include<time.h>

main() {
	int kazu;

	srand(time(0));
	kazu = rand();
	printf("発生した乱数は %d です\n",kazu);
}