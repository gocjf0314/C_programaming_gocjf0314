/* 1-1. ���� �̿��� �Լ�ȣ��
#include<stdio.h>
void SquareByValue(int n) {
	printf("num1�� ����: %d \n", n*n);
}
int main(void) {
	int num1;
	printf("num1=");
	scanf("%d", &num1);
	SquareByValue(num1);
	return 0;
}*/
/* 1-2. ������ �̿��� �Լ�ȣ��
#include<stdio.h>
void SquareByRefrence(int *ptr);
int main(void) {
	int num;
	printf("num=");
	scanf("%d", &num);
	SquareByRefrence(&num);
	return 0;
}
void SquareByRefrence(int *ptr) {
	int square = (*ptr)*(*ptr);
	ptr = &square;
	printf("num�� ����: %d \n", *ptr);
}*/ 
/* 2. �Է¹��� �� ���� �ڸ��� �ٲپ��ִ� �Լ�.
#include<stdio.h>
void Swap3(int *temp1, int *temp2, int *temp3);
int num1, num2, num3;
int main(void) {
	printf("num1="); scanf("%d", &num1);
	printf("num2="); scanf("%d", &num2);
	printf("num3="); scanf("%d", &num3);
	Swap3(&num1, &num2, &num3);
	return 0;
}
void Swap3(int *temp1, int *temp2, int *temp3) {
	num1 = *temp2;
	num2 = *temp3;
	num3 = *temp1;
	printf("num1=%d \num2=%d \num3=%d \n", num1, num2, num3);
}*/