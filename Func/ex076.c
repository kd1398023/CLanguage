#include <stdio.h>
void calculate(int x, int y, int* wa, float* ave);

main()
{
	
	int a, b, sum;
	float ave;
	printf("数値を２つ入力:  ");
	scanf("%d%d", &a, &b);
	calculate(a, b, &sum, &ave);
	printf("合計は %d , 平均は %.2f\n ", sum, ave);
}




void calculate(int x, int y, int* wa, float* ave)
{
	*wa = x + y;
	*ave = (x + y) / 2.0;
	return;
}