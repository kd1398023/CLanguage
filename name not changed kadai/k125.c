  #include<stdio.h>
main()
{
	int data[9] = { 10,20,30,40,50,60,70,80,-999 };
	int* p_data ;
	p_data = data;
	int i;
	printf("\nポインタを固定させて表示");

	printf("\n配列 data[] = ");
	for (i = 0; *(p_data + i) != -999; i++) {
		printf(" %d ", *(p_data + i));
	}
	printf("\nポインタを変化させて表示");
	printf("\n配列 data[] = ");
	while (*p_data != -999) {
		printf(" %d ", *p_data++);
	}

}