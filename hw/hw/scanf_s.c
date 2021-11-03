#include <stdio.h>

int main(void) {
	char ch1, ch2, ch3;
	short sh1;
	int d1, d2, d3, d4, d5;
	long e1;
	long long e2;
	float f1;
	double f2;

	printf("첫 번째로 short 정수 입력: ");
	scanf_s("%hd", &sh1);
	getchar();
	printf("두 번째로 int 정수 - 정수 - 정수 입력: ");
	scanf_s("%d - %d - %d", &d1, &d2, &d3);
	getchar();
	printf("세 번째로 문자, 문자 입력: ");
	scanf_s("%c, %c", &ch1, 1, &ch2, 1);
	getchar();
	printf("네 번째로 한 문자 입력: ");
	ch3 = getchar();
	printf("다섯 번째로 8진수, 16진수 입력: ");
	scanf_s("%o, %x", &d4, &d5);
	getchar();
	printf("여섯 번째로 long 정수 입력: ");
	scanf_s("%ld", &e1);
	printf("일곱 번째로 long long정수 입력: ");
	scanf_s("%lld", &e2);
	printf("여덟 번째로 float 실수 입력: ");
	scanf_s("%f", &f1);
	printf("아홉 번째로 double 실수 입력: ");
	scanf_s("%lf", &f2);

	printf("\n%hd, %d, %d, %d, %c, %c, %c, %o, %x\n", sh1, d1, d2, d3, ch1, ch2, ch3, d4, d5);
	printf("%10ld, %10lld, %10.2f, %10.2lf\n", e1, e2, f1, f2);

	return 0;
}