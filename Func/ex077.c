#include <stdio.h>
void maxmin(int a, int b, int c, int* max, int* min);

main()
{
	int a, b, c, max, min;

	printf("数値を3つ入力:  ");
	scanf("%d%d%d", &a, &b, &c);
	maxmin(a, b, c, &max, &min);
	printf("最大値 = %d   最小値 = %d\n", max, min);
}


void maxmin(int a, int b, int c, int* max, int* min)
{
	//最大値を求める
	//仮に最大値としてx をmax に入れる
	*max = a;
	//b to 比較してb が大きい場合はmaxに入れる 
	if (b > *max) {
		*max = b;
	}
	//cと比較してcが大きい場合はmax に入れる

	if (c > *max) {
		*max = c;
	}

	//最小値を求める
	//仮に最小値としてx をmax に入れる
	*min = a;
	//b to 比較してb が小さい場合はminに入れる 
	if (b < *min) {
		*min = b;
	}
	//cと比較してcが小さい場合はmin に入れる

	if (c < *min) {
		*min = c;
	}
}