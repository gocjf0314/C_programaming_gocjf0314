/*
<�� �� �߿��� ���� ū ���� ���� ���� ���� ã�Ƴ���>
#include<stdio.h>
int Max(int a, int b, int c);
int mini(int a, int b, int c);

int main(void) {
	int a, b, c;
	int M, m;
	printf("�� ���� �Է��Ͻÿ�. ");
	scanf("%d %d %d", &a, &b, &c);
	M = Max(a, b, c);
	m = mini(a, b, c);
	printf("���� ���� ��: %d \n���� ū ��: %d \n", m, M);
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
/*<�����µ��� ȭ���µ��� ��ȯ>
#include<stdio.h>
double CelToFah(int C);
double FahToCel(int F);

int main(void) {
	double C, F;
	double Cel, Fah;
	printf("������ �Է��Ͻÿ�. ");
	scanf("%lf", &C);
	Fah = CelToFah(C);
	printf("������ ȭ���� ��ȯ�� �µ�: %f \n", Fah);
	printf("ȭ���� �Է��Ͻÿ�. ");
	scanf("%lf", &F);
	Cel = FahToCel(F);
	printf("ȭ���� ������ ��ȯ�� �µ�: %f \n", Cel);
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
<����Լ��� �̿��� �Ǻ���ġ ���� ��Ÿ����>
#include<stdio.h>
int FiboFunc(int a, int b, int c, int k, int i);
int main(void) {
	int a, b, c=0, k;
	int i = 3;
	printf("���� ������ ���Ͻÿ�. ");
	scanf("%d", &k);
	printf("1��° ��: ");
	scanf("%d", &a);
	printf("2��° ��: ");
	scanf("%d", &b);
	FiboFunc(a, b, c, k, i);
	return 0;
}
int FiboFunc(int a, int b, int c, int k, int i) {
	if (i <= k) {
		c = a + b;
		printf("%d��° ��: %d \n", i, c);
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
<���� ����3>
#include<stdio.h>
int GCD(int a, int b, int i, int k);
int main(void) {
	int a, b, i=0, k=1;
	int gcd;
	printf("�� ���� �Է��Ͻÿ�. ");
	scanf("%d %d", &a, &b);// a<b
	gcd = GCD(a, b, i, k);
	printf("�ִ�����: %d \n", gcd);
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