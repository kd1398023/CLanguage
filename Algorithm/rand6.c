#include <stdio.h>
#include<stdlib.h>
#include <time.h>
main()
{
	int p, c;

	printf("何を出しますか？\n ");
	scanf("%d", &p);
	
	if (p == 1) {
		printf("p は　グーです。\n");
	}
	if (p == 2) {
		printf("p は チョキです。\n");
	}
	if (p == 3) {
		printf("p は　パーです。\n");
	}
	srand(time(0));
	c = rand() % 3+1;
	if (c == 1) {
		printf("c は　グーです。\n");
	}
	if (c == 2) {
		printf("c は チョキです。\n");
	}
	if (c == 3) {
		printf("c は　パーです。\n");
	}
	if ((p - c + 3) % 3 == 2) {
		printf("プレイヤーの勝ちです。\n");
	}
	if ((p - c + 3) % 3 == 1) {
		printf("プレイヤーの負けです。\n");
	}
	if ((p - c + 3) % 3 == 0) {
		printf("あいこです。\n");
	}


}