/* 17-1. �迭�� �Է¹ް� �ִ񰪰� �ּڰ� �ޱ�
#include<stdio.h>
void Maxandmin(int* ptr, int len);
int main(void) {
	int arr[5];
	int len = sizeof(arr) / sizeof(int);
	int i;

	for (i = 0; i < 5; i += 1) {
		printf("arr[%d]=", i);
		scanf_s("%d", &arr[i]);
	}
	Maxandmin(arr, len);
	return 0;
}

void Maxandmin(int* ptr, int len) {
	int* maxPtr;
	int* minPtr;
	int i = 0, n = 0;// i: ���ϴ� ����, n:  �񱳴��ϴ� ����
	int p = 0, m = 0;// p: �ִ� ���� �� ���� Ƚ��, m: �ּڰ� ���� �� ���� Ƚ��

	while (p != len) {
		if (ptr[i] >= ptr[n + 1]) {
			n += 1;
			p += 1;
			if (p == len) {
				maxPtr = &ptr[i];
				break;
			}
		}
		else if (ptr[i] < ptr[n + 1]) {
			i += 1;
			n = 0;
			p = 0;
			continue;
		}
	}//�ִ� ���ϴ� �ݺ���

	i = 0;
	n = 0;

	while (m != len) {
		if (ptr[i] <= ptr[n + 1]) {
			n += 1;
			m += 1;
			if (m == len - 1) {
				minPtr = &ptr[i];
				break;
			}
		}
		else if (ptr[i] > ptr[n + 1]) {
			i += 1;
			n = 0;
			m = 0;
			continue;
		}
	}//�ּڰ� ���ϴ� �ݺ���

	printf("�ִ�: %d \n", *maxPtr);
	printf("�ּڰ�: %d \n", *minPtr);
}*/