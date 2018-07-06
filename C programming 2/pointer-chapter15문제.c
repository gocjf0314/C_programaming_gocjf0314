/*도전2-10진수를 2진수로 바꾸어주기
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
	for (k = 0, i = 0; a != 0; ) {
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
#include<stdio.h>
int Bubble(int *ptr, int i, )