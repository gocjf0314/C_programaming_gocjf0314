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
/* ���ϴ� �迭�� ���̸� �Է¹��� �� ���δٸ� ���ڵ��� �������� �Է��ؼ� ��������,������������ ����ϴ� �Լ�.
#include<stdio.h>
void BubbleUp(int ptr[], int len);
void BubbleDown(int ptr[], int len);
int main(void) {
	int arr[10];
	int k;
	printf("���ϴ� �迭�� ���̸� �Է��Ͻÿ�.(��, 1<=k<=10) ");
	scanf("%d", &k);
	for (int i = 0; i < k; ++i) {
		printf("arr[%d]=", i);
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < k; ++i) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("�������� �迭: ");
	BubbleUp(arr, k);
	printf("�������� �迭: ");
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