#include<Stdio.h>
main()
{

	double i, a[10];
	a[0] = 0.0;
	a[1] = 1.1;
	a[2] = 2.2;
	a[3] = 3.3;
	a[4] = 4.4;
	a[5] = 5.5;
	a[6] = 6.6;
	a[7] = 7.7;
	a[8] = 8.8;
	a[9] = 9.9;

	for (i = 0; i < 10; i++) {
		printf("a[%f] = %.2f\n", i, a[i]);
	}
}