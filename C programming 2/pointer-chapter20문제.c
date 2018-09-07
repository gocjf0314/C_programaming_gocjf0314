/* 1. 2차원 배열 회전시키기
#include<stdio.h>

int main(void){
	int arr[4][4]={
		{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}
	};
	int n, i;// n:가로, i: 세로

	printf("**********원래 2차원 배열********** \n");
	for (n = 0; n < 4; n++) {
		for (i = 0; i < 4; i++) {
			printf("%d ", arr[n][i]);
		}
		printf("\n");
	}
	printf("\n");

	printf("**********오른쪽으로 90도 회전한 배열********** \n");
	for (i = 0; i < 4; i++) {
		for (n = 3; n >= 0; n--) {
			printf("%d ", arr[n][i]);
		}
		printf("\n");
	}
	printf("\n");

	printf("**********오른쪽으로 180도 회전한 배열********** \n");
	for (n = 3; n >= 0; n--) {
		for (i = 3; i >= 0; i--) {
			printf("%d ", arr[n][i]);
		}
		printf("\n");
	}
	printf("\n");

	printf("**********오른쪽으로 270도 회전한 배열********** \n");
	for (i = 0; i < 4; i++) {
		for (n = 0; n < 4; n++) {
			printf("%d ", arr[n][i]);
		}
		printf("\n");
	}
	return 0;
}*/

/* 2. 달팽이 배열 시계방향*/