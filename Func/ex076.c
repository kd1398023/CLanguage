#include <stdio.h>
void calculate(int x, int y, int* wa, float* ave);

main()
{
	
	int a, b, sum;
	float ave;
	printf("”’l‚ğ‚Q‚Â“ü—Í:  ");
	scanf("%d%d", &a, &b);
	calculate(a, b, &sum, &ave);
	printf("‡Œv‚Í %d , •½‹Ï‚Í %.2f\n ", sum, ave);
}




void calculate(int x, int y, int* wa, float* ave)
{
	*wa = x + y;
	*ave = (x + y) / 2.0;
	return;
}