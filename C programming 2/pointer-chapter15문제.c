/*����2-10������ 2������ �ٲپ��ֱ�
#include<stdio.h>
void Binary(int *ptr);
int main(void) {
	int Bin[6];
	Binary(&Bin[5]);
	return 0;
}
void Binary(int *ptr) {
	int k, i, a;
	printf("2������ ��ȯ�� 10������ �Է��Ͻÿ�.");
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
/*����4-����ܾ� �Է� �� ȸ������ �Ǻ��ϱ�.
#include<stdio.h>
int Palindrome(char pstr[], char pstr2[], int len);
int main(void) {
	char str[10];
	int len = 0, i = 0;
	printf("����ܾ �Է��Ͻÿ�. ");
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
			printf("ȸ���� �ƴմϴ�. \n");
			return 0;
		}
	}
	printf("ȸ���Դϴ�. \n");
	return 0;
}*/
#include<stdio.h>
int Bubble(int *ptr, int i, )