/* 1. 2���� �迭 ȸ����Ű��
#include<stdio.h>

int main(void){
	int arr[4][4]={
		{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}
	};
	int n, i;// n:����, i: ����

	printf("**********���� 2���� �迭********** \n");
	for (n = 0; n < 4; n++) {
		for (i = 0; i < 4; i++) {
			printf("%d ", arr[n][i]);
		}
		printf("\n");
	}
	printf("\n");

	printf("**********���������� 90�� ȸ���� �迭********** \n");
	for (i = 0; i < 4; i++) {
		for (n = 3; n >= 0; n--) {
			printf("%d ", arr[n][i]);
		}
		printf("\n");
	}
	printf("\n");

	printf("**********���������� 180�� ȸ���� �迭********** \n");
	for (n = 3; n >= 0; n--) {
		for (i = 3; i >= 0; i--) {
			printf("%d ", arr[n][i]);
		}
		printf("\n");
	}
	printf("\n");

	printf("**********���������� 270�� ȸ���� �迭********** \n");
	for (i = 0; i < 4; i++) {
		for (n = 0; n < 4; n++) {
			printf("%d ", arr[n][i]);
		}
		printf("\n");
	}
	return 0;
}*/

/* 2. ������ �迭 �ð����*/