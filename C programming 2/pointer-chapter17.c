/* 17-1. 배열을 입력받고 최댓값과 최솟값 받기
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
	int i = 0, n = 0;// i: 비교하는 번지, n:  비교당하는 번지
	int p = 0, m = 0;// p: 최댓값 구할 때 비교한 횟수, m: 최솟값 구할 때 비교한 횟수

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
	}//최댓값 구하는 반복문

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
	}//최솟값 구하는 반복문

	printf("최댓값: %d \n", *maxPtr);
	printf("최솟값: %d \n", *minPtr);
}*/