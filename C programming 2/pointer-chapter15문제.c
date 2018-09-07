/* 도전2-10진수를 2진수로 바꾸어주기
#include<stdio.h>
void Binary(int *ptr);
int main(void) {
	int Bin[6];
	Binary(&Bin[5]);
	return 0;
}
void Binary(int *ptr) {
	int k, i, a;
	printf("2진수로 변환할 10진수를 입력하시오.");
	scanf_s("%d", &a);
	for (k = 0, i = 0;
		*(ptr - i) = a % 2;
		a = a / 2;
		if (a != 0) {
			i += 1; k += 1;
			continue;
		}
		else {
			continue;
		}
	}
	while (k != -1) {
		printf("%d", *(ptr-k));
		k -= 1;
	}
	printf("\n");
}*/
/*도전4-영어단어 입력 후 회문인지 판별하기.
#include<stdio.h>
int Palindrome(char pstr[], char pstr2[], int len);
int main(void) {
	char str[10];
	int len = 0, i = 0;
	printf("영어단어를 입력하시오. ");
	scanf("%s", str);
	while (str[i] != '\0') {
		i += 1;
		if (str[i] != '\0') {
			len += 1;
		}
	}
	Palindrome(str, &str[len], len);
	return 0;
}
int Palindrome(char pstr[], char pstr2[], int len) {
	int i = 0;
	for (i; i < (len / 2); ++i) {
		if (*(pstr + i) == *(pstr2 - i)) {
			continue;
		}
		else if (*(pstr + i) != *(pstr2 - i)) {
			printf("회문이 아닙니다. \n");
			return 0;
		}
	}
	printf("회문입니다. \n");
	return 0;
}*/
/* 원하는 배열의 길이를 입력받은 후 서로다른 숫자들을 랜덤으로 입력해서 오름차순,내림차순으로 출력하는 함수.
#include<stdio.h>
void BubbleUp(int ptr[], int len);
void BubbleDown(int ptr[], int len);
int main(void) {
	int arr[10];
	int k;
	printf("원하는 배열의 길이를 입력하시오.(단, 1<=k<=10) ");
	scanf("%d", &k);
	for (int i = 0; i < k; ++i) {
		printf("arr[%d]=", i);
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < k; ++i) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("오름차순 배열: ");
	BubbleUp(arr, k);
	printf("내림차순 배열: ");
	BubbleDown(arr, k);
	return 0;
}
void BubbleUp(int ptr[], int len) {
	int i, c;
	int temp;
	for (c = 0; c < len - 1; ++c) {
		for (i = 0; i < (len - c) - 1; ++i) {
			if (ptr[i] > ptr[i + 1]) {
				temp = ptr[i];
				ptr[i] = ptr[i + 1];
				ptr[i + 1] = temp;
			}
		}
	}
	for (int i = 0; i < len; i += 1) {
		printf("%d ", ptr[i]);
	}
	printf("\n");
}
void BubbleDown(int ptr[], int len) {
	int i, c;
	int temp;
	for (c = 0; c < len - 1; ++c) {
		for (i = 0; i < (len - c) - 1; ++i) {
			if (ptr[i] < ptr[i + 1]) {
				temp = ptr[i];
				ptr[i] = ptr[i + 1];
				ptr[i + 1] = temp;
			}
		}
	}
	for (int i = 0; i < len; i += 1) {
		printf("%d ", ptr[i]);
	}
	printf("\n");
}*/

/* 3. 길이가 10인 배열을 선언 후 정수를 입력받아 홀수는 앞, 짝수는 뒤에서부터 채우기
#include<stdio.h>

void FirstOdd(int* ptr1, int len);

int main(void) {
	int arr[10];
	int i;
	int len=sizeof(arr)/sizeof(int);

	for (i = 0; i < len; i++) {
		printf("arr[%d]=", i);
		scanf("%d", &arr[i]);
	}

	FirstOdd(&arr[0], len);

	printf("배열의 요소 출력: ");
	for (i = 0; i < len; i++) {
		printf("%d, ", arr[i]);
	}
	printf("\n");
	return 0;
}

void FirstOdd(int* ptr1, int len) {
	int arr1[10];
	int i;
	int k = 0, s = len-1;

	for (i = 0; i < len; i++) {
		if (ptr1[i] % 2 == 1) {
			arr1[k] = ptr1[i];
			k++;
		}
		else if (ptr1[i] % 2 == 0) {
			arr1[s] = ptr1[i];
			s--;
		}
	}

	for (i = 0; i < len; i++) {
		ptr1[i] = arr1[i];
	}
}*/