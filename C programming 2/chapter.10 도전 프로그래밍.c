/* 1. 10������ �Է¹��� �� 16������ ����ϱ�
#include<stdio.h>
int main(void) {
	int num;

	printf("16������ ��ȯ�� 10������ �Է��Ͻÿ�.");
	scanf("%d", &num);

	printf("num�� 16������ ��ȯ�� ��: %x \n", num);
	return 0;
}*/

/* 2. �� ������ ���ڷ� ���� �޾Ƽ� �μ� ������ ���� ������ ����ϱ�
#include<stdio.h>

void DoubleNineArr(int a, int b);

int  main(void) {
	int a, b;
	do {
		printf("�������� ����� ������ ���ϴ� �� ���� �Է��Ͻÿ�. ");
		scanf("%d %d", &a, &b);
	} while (a == b);

	DoubleNineArr(a, b);
	return 0;
}

void DoubleNineArr(int a, int b) {
	int B, s;
	int n, i;

	if (a > b) {
		B = a;
		s = b;
	}
	else if (a < b) {
		B = b;
		s = a;
	}

	for (n = s; n <= B; n++) {
		for (i = 1; i <= 9; i++) {
			printf("%d x %d = %d \n", n, i, n*i);
		}
		printf("\n");
	}
	printf("\n");
}*/

/* 4. ���� ������ �Ž����� ���� �� �� �̻� �����ϴ� ���� �� ���ϱ�
#include<stdio.h>

void main(void) {
	int bread = 500, a;//a: ������
	int snack = 700, b;//b: ���ڰ���
	int coke = 400, c;//c: �ݶ󰹼�
	int m = 3500;// m: �� �ݾ�

	printf("���� ����� �����ϰ� �ִ� �ݾ�: 3500 \n");

	for (b = 1; b < 4; b++) {
		if (b == 1) {
			for (a = 1; a < 7; a++) {
				for (c = 1; c < 8; c++) {
					m = m - (snack*b + bread * a + coke * c);
					
					if (m == 0) {
						printf("ũ���� %d��, ����� %d��,�ݶ� %d�� \n", a, b, c);
					}
					
					m = 3500;
				}
			}
		}
		m = 3500;
		else if (b == 2) {
			for (a = 1; a < 7; a++) {
				for (c = 1; c < 8; c++) {
					m = m - (snack*b + bread * a + coke * c);
					
					if (m == 0) {
						printf("ũ���� %d��, ����� %d��,�ݶ� %d�� \n", a, b, c);
					}
					
					m = 3500;
				}
			}
		}
		m = 3500;
		else if (b == 3) {
			for (a = 1; a < 7; a++) {
				for (c = 1; c < 8; c++) {
					m = m - (snack*b + bread * a + coke * c);
					
					if (m == 0) {
						printf("ũ���� %d��, ����� %d��,�ݶ� %d�� \n", a, b, c);
					}
					
					m = 3500;
				}
			}
		}
	}

	printf("��� �����Ͻðڽ��ϱ�? \n");
	return 0;
}*/

/* 5. �Ҽ� 10�� ����ϱ�
#include<stdio.h>

void PrimeNumber(void);

int main(void) {
	PrimeNumber();
	return 0;
}

void PrimeNumber(void) {
	int n;
	int k;
	int i = 0;
	int num = 2;

	for (n = 1; n < 11; ) {
		for (k = 1; k <= num; k++) {
			if (num%k == 0) {
				i += 1;
			}
			
		}
		if (i == 2) {
			printf("%d ", num);
			n+=1;
			num+=1;
			i = 0;

		}
		else if (i != 2) {
			num += 1;
			i = 0;
		}
	}
}*/

/* 6. �ʸ� �Է¹ް� �ð�, ��, �ʷ� �����ؼ� ��Ÿ����
#include<stdio.h>

int main(void) {
	int s;
	int m;
	int h;

	printf("��(second)�� �Է��Ͻÿ�. ");
	scanf("%d", &s);

	h = s / 3600;
	s = s - 3600 * h;

	m = s / 60;
	s = s - 60 * m;

	printf("[h: %d, m: %d, s: %d] \n", h, m, s);
	return 0;
}*/

/* 7. ������ �����ϴ� k�� �ִ� ���ϱ�
#include<stdio.h>
#include<math.h>

int main(void) {
	double k=0;// k: ������
	double n;
	double num;

	printf("2�� k �������� ���� n�� �Է��Ͻÿ�. ");
	scanf("%lf", &n);

	num = pow(2.0, k);

	while (num <= n) {
		k += 1;
		num = pow(2.0, k);
	}
	k -= 1;
	printf("�� ������ �����ϴ� k�� �ִ밪�� %f�̴�. \n", k);
	return 0;
}*/

/* 8. ����Լ��� �̿��� 2�� n�� ����ϱ�
#include<stdio.h>

int Sqrt(int n) {
	if (n == 0) {
		return 1;
	}
	else
		return 2 * Sqrt(n-1);
}

int main(void) {
	int n;

	printf("���� �Է�: ");
	scanf("%d", &n);

	printf("2�� %d���� %d�Դϴ�. \n", n, Sqrt(n));
	return 0;
}*/