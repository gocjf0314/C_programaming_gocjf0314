/* 1. 2���� �迭�� ������ �Է��ϰ� ����ϱ�
#include<stdio.h>
int main(void) {
	int arr1[3][9];
	int a, b;// a:����, b:����
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
/* 2. A�迭�� 90�� ȸ�������� �� ������ B�迭�� A�� �̿��Ͽ� ��Ÿ����
#include<stdio.h>
int main(void) {
	int arr1[2][4], arr2[4][2];
	int a, b;// a:arr1�� ���� arr2�� ����, b:arr1�� ���� arr2�� ����
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
/* 3. �������� ���α׷�
#include<stdio.h>
int main(void) {
	int score[5][5];
	int p, s, hap=0;//p:����, s:����, hap:����� ���� Ȥ�� ������ ����
	for (p = 0; p < 4; ++p) {
		for (s = 0; s < 4; ++s) {
			printf("arr1[%d][%d]=", p, s);
			scanf("%d", &score[p][s]);
		}
		printf("\n");
	}
	printf("\n");
	for (p = 0; p < 4; ++p) //����� ���� ����
	{
		score[p][4] = 0;
		for (s = 0; s < 4; ++s) {
			score[p][4] += score[p][s];
		}
	}
	for (s = 0; s < 4; ++s)//����� ��� ����
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