/*chapter13문제
1.
#include<stdio.h>
int main(void) {
	int arr[5] = { 1, 2, 3, 4, 5 };
	int *ptr = arr;
	int i;

	for (i = 0; i < 5; ) {
		*ptr += 2;
		i += 1;
		++ptr;
	}
	for (i = 0; i < 5; ) {
		printf("%d ", arr[i]);
	}
	return 0;
}*/
/*2.
#include<stdio.h>
int main(void) {
	int arr[5] = { 1, 2, 3, 4, 5 };
	int *ptr = &arr[4];
	int i;

	for (i = 0; i < 5; ) {
		*ptr += 2;
		i += 1;
		--ptr;
	}
	for (i = 0; i < 5; ) {
		printf("%d ", arr[i]);
	}
	return 0;
}*/
/*3.
#include<stdio.h>
int main(void) {
	int arr[5] = { 1, 2, 3, 4, 5 };
	int *ptr = &arr[4];
	int i, s = 0;

	for (i = 0; i < 5; ) {
		s += *ptr;
		i += 1;
		--ptr;
	}
	printf("배열에 있는 정수들의 합: %d \n", s);
	return 0;
}*/
/*4
#include<stdio.h>
int main(void) {
	int arr[6] = { 1, 2, 3, 4, 5, 6 };
	int *ptr1=arr, *ptr2=&arr[5];
	int i=0;
	
	for (i = 0; i < 3;) {
		int temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;
		++ptr1; --ptr2;
		++i;
	}
	for (i = 0; i < 6; ++i) {
		printf("%d ", arr[i]);
	}
	return 0;
}*/