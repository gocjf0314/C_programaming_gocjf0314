#include<stdio.h>
int main(void) {
	int num1 = 10;
	double num2 = 1.5;
	int *ptr1 = &num1;
	double *ptr2 = &num2;
	(*ptr1) = 30;
	(*ptr2) = 3.4;

	printf("%d, %d \n", ptr1, *ptr1);
	printf("%d, %f \n", ptr2, *ptr2);
	return 0;
}
