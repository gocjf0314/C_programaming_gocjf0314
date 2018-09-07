/* 1. 2차원 배열에 구구단 입력하고 출력하기
#include<stdio.h>
int main(void) {
	int arr1[3][9];
	int a, b;// a:세로, b:가로
	for (a = 0 ; a < 3; ++a) {
		for (b = 0; b < 9; ++b) {
			printf("arr1[%d][%d]=", a, b);
			scanf("%d", &arr1[a][b]);
		}
		printf("\n");
	}
	printf("\n");
	for (a = 0; a < 3; ++a) {
		for (b = 0; b < 9; ++b) {
			printf("arr1[%d][%d]=%d", a, b, arr1[a][b]);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}*/
/* 2. A배열을 90도 회전시켰을 때 상태인 B배열을 A를 이용하여 나타내기
#include<stdio.h>
int main(void) {
	int arr1[2][4], arr2[4][2];
	int a, b;// a:arr1의 가로 arr2의 세로, b:arr1의 세로 arr2의 가로
	for (a = 0; a < 2; ++a) {
		for (b = 0; b < 4; ++b) {
			printf("arr1[%d][%d]=", a, b);
			scanf("%d", &arr1[a][b]);
		}
		printf("\n");
	}
	printf("\n");

	for (b = 0; b < 4; ++b) {
		for (a = 0; a < 2; ++a) {
			arr2[b][a] = arr1[a][b];
		}
		printf("\n");
	}
	printf("\n");
	for (b = 0; b < 4; ++b) {
		for (a = 0; a < 2; ++a) {
			printf("arr2[%d][%d]=%d ", b, a, arr2[b][a]);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}*/
/* 3. 성적관리 프로그램
#include<stdio.h>
int main(void) {
	int score[5][5];
	int p, s, hap=0;//p:세로, s:가로, hap:행들의 총합 혹은 열들의 총합
	for (p = 0; p < 4; ++p) {
		for (s = 0; s < 4; ++s) {
			printf("arr1[%d][%d]=", p, s);
			scanf("%d", &score[p][s]);
		}
		printf("\n");
	}
	printf("\n");
	for (p = 0; p < 4; ++p) //사람당 과목 총합
	{
		score[p][4] = 0;
		for (s = 0; s < 4; ++s) {
			score[p][4] += score[p][s];
		}
	}
	for (s = 0; s < 4; ++s)//과목당 사람 총합
	{
		score[4][s] = 0;
		for (p = 0; p < 4; ++p) {
			score[4][s] += score[p][s];
		}
	}
	score[4][4] = 0;
	for (s = 0; s < 4; ++s) {
		score[4][4] += score[4][s];
	}
	printf("\n");
	for (p = 0; p < 5; ++p) {
		for (s = 0; s < 5; ++s) {
			printf("score[%d][%d]=%d ", p, s, score[p][s]);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}*/