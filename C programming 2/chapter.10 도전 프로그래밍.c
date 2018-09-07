/* 1. 10진수를 입력받은 뒤 16진수로 출력하기
#include<stdio.h>
int main(void) {
	int num;

	printf("16진수로 변환할 10진수를 입력하시오.");
	scanf("%d", &num);

	printf("num을 16진수로 변환한 수: %x \n", num);
	return 0;
}*/

/* 2. 두 정수를 인자로 전달 받아서 두수 사이의 수로 구구단 출력하기
#include<stdio.h>

void DoubleNineArr(int a, int b);

int  main(void) {
	int a, b;
	do {
		printf("구구단을 출력할 범위를 정하는 두 수를 입력하시오. ");
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

/* 4. 가지 물건을 거스름돈 없이 한 개 이상씩 구매하는 가지 수 구하기
#include<stdio.h>

void main(void) {
	int bread = 500, a;//a: 빵갯수
	int snack = 700, b;//b: 과자갯수
	int coke = 400, c;//c: 콜라갯수
	int m = 3500;// m: 총 금액

	printf("현재 당신이 소유하고 있는 금액: 3500 \n");

	for (b = 1; b < 4; b++) {
		if (b == 1) {
			for (a = 1; a < 7; a++) {
				for (c = 1; c < 8; c++) {
					m = m - (snack*b + bread * a + coke * c);
					
					if (m == 0) {
						printf("크림빵 %d개, 새우깡 %d개,콜라 %d개 \n", a, b, c);
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
						printf("크림빵 %d개, 새우깡 %d개,콜라 %d개 \n", a, b, c);
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
						printf("크림빵 %d개, 새우깡 %d개,콜라 %d개 \n", a, b, c);
					}
					
					m = 3500;
				}
			}
		}
	}

	printf("어떻게 구입하시겠습니까? \n");
	return 0;
}*/

/* 5. 소수 10개 출력하기
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

/* 6. 초를 입력받고 시간, 분, 초로 구별해서 나타내기
#include<stdio.h>

int main(void) {
	int s;
	int m;
	int h;

	printf("초(second)를 입력하시오. ");
	scanf("%d", &s);

	h = s / 3600;
	s = s - 3600 * h;

	m = s / 60;
	s = s - 60 * m;

	printf("[h: %d, m: %d, s: %d] \n", h, m, s);
	return 0;
}*/

/* 7. 범위를 만족하는 k의 최댓값 구하기
#include<stdio.h>
#include<math.h>

int main(void) {
	double k=0;// k: 제곱수
	double n;
	double num;

	printf("2의 k 제곱수와 비교할 n을 입력하시오. ");
	scanf("%lf", &n);

	num = pow(2.0, k);

	while (num <= n) {
		k += 1;
		num = pow(2.0, k);
	}
	k -= 1;
	printf("위 공식을 만족하는 k의 최대값은 %f이다. \n", k);
	return 0;
}*/

/* 8. 재귀함수를 이용한 2의 n승 출력하기
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

	printf("정수 입력: ");
	scanf("%d", &n);

	printf("2의 %d승은 %d입니다. \n", n, Sqrt(n));
	return 0;
}*/