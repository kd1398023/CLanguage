#include <stdio.h>
#define TBL_END 5
int tbl_gokei4(int* p);
main()
{
	int a[] = { 10,20,30,40,50 }, gokei;
	gokei = tbl_gokei4(a);
	printf("gokei = %d\n", gokei);
}


int tbl_gokei4(int* p)
{
	int gokei = 0, i; 
	for (i = 0; i < TBL_END; i++) {//check that if there is define in the first line or not
		gokei += *(p+i);// important, mistake found 
	}
	return(gokei);
}