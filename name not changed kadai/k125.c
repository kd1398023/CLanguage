  #include<stdio.h>
main()
{
	int data[9] = { 10,20,30,40,50,60,70,80,-999 };
	int* p_data ;
	p_data = data;
	int i;
	printf("\n�|�C���^���Œ肳���ĕ\��");

	printf("\n�z�� data[] = ");
	for (i = 0; *(p_data + i) != -999; i++) {
		printf(" %d ", *(p_data + i));
	}
	printf("\n�|�C���^��ω������ĕ\��");
	printf("\n�z�� data[] = ");
	while (*p_data != -999) {
		printf(" %d ", *p_data++);
	}

}