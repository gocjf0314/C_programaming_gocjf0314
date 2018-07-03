/*
<세 수 중에서 가장 큰 수와 가장 작은 수를 찾아내기>
#include<stdio.h>
int Max(int a, int b, int c);
int mini(int a, int b, int c);

int main(void) {
	int a, b, c;
	int M, m;
	printf("세 수를 입력하시오. ");
	scanf("%d %d %d", &a, &b, &c);
	M = Max(a, b, c);
	m = mini(a, b, c);
	printf("제일 작은 수: %d \n제일 큰 수: %d \n", m, M);
	return 0;
}

int Max(int a, int b, int c) {
	if (a > b) {
		if (a > c) {
		return a;
		}
		else {
		return c;
		}
	}
	else if(a<b){
		if (b > c) {
		return b;
		}
		else {
		return c;
		}
	}
}

int mini(int a, int b, int c) {
	if (a < b) {
		if (a < c) {
		return a;
		}
		else {
		return c;
		}
	}
	else if (a>b) {
		if (b < c) {
		return b;
		}
		else {
		return c;
		}
	}
}
*/
/*<섭씨온도와 화씨온도의 전환>
#include<stdio.h>
double CelToFah(int C);
double FahToCel(int F);

int main(void) {
	double C, F;
	double Cel, Fah;
	printf("섭씨를 입력하시오. ");
	scanf("%lf", &C);
	Fah = CelToFah(C);
	printf("섭씨를 화씨로 변환한 온도: %f \n", Fah);
	printf("화씨를 입력하시오. ");
	scanf("%lf", &F);
	Cel = FahToCel(F);
	printf("화씨를 섭씨로 변환한 온도: %f \n", Cel);
	return 0;
}
double CelToFah(int C) {
	return 1.8*C + 32;
}
double FahToCel(int F) {
	return (F - 32) / 1.8;
}
*/
/*
<재귀함수를 이용한 피보나치 수열 나타내기>
#include<stdio.h>
int FiboFunc(int a, int b, int c, int k, int i);
int main(void) {
	int a, b, c=0, k;
	int i = 3;
	printf("항의 개수를 정하시오. ");
	scanf("%d", &k);
	printf("1번째 항: ");
	scanf("%d", &a);
	printf("2번째 항: ");
	scanf("%d", &b);
	FiboFunc(a, b, c, k, i);
	return 0;
}
int FiboFunc(int a, int b, int c, int k, int i) {
	if (i <= k) {
		c = a + b;
		printf("%d번째 항: %d \n", i, c);
		a = b;
		b = c;
		i += 1;
		return FiboFunc(a, b, c, k, i);
	}
	else {
		return 0;
	}
}
*/
/*
<도전 문제3>
#include<stdio.h>
int GCD(int a, int b, int i, int k);
int main(void) {
	int a, b, i=0, k=1;
	int gcd;
	printf("두 수를 입력하시오. ");
	scanf("%d %d", &a, &b);// a<b
	gcd = GCD(a, b, i, k);
	printf("최대공약수: %d \n", gcd);
	return 0;
}
int GCD(int a, int b, int i, int k) {
	int value[20];
	while (k <= a) {
		if (a%k == 0 && b%k == 0) {
			value[i] = k;
			i += 1, k += 1;
			continue;
		}
		else {
			k += 1;
			continue;
		}
	}
	return value[i-1];
}
*/