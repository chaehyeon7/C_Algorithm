#include <stdio.h>

int main(void) {
	char ch1, ch2, ch3;
	short sh1;
	int d1, d2, d3, d4, d5;
	long e1;
	long long e2;
	float f1;
	double f2;

	printf("ù ��°�� short ���� �Է�: ");
	scanf_s("%hd", &sh1);
	getchar();
	printf("�� ��°�� int ���� - ���� - ���� �Է�: ");
	scanf_s("%d - %d - %d", &d1, &d2, &d3);
	getchar();
	printf("�� ��°�� ����, ���� �Է�: ");
	scanf_s("%c, %c", &ch1, 1, &ch2, 1);
	getchar();
	printf("�� ��°�� �� ���� �Է�: ");
	ch3 = getchar();
	printf("�ټ� ��°�� 8����, 16���� �Է�: ");
	scanf_s("%o, %x", &d4, &d5);
	getchar();
	printf("���� ��°�� long ���� �Է�: ");
	scanf_s("%ld", &e1);
	printf("�ϰ� ��°�� long long���� �Է�: ");
	scanf_s("%lld", &e2);
	printf("���� ��°�� float �Ǽ� �Է�: ");
	scanf_s("%f", &f1);
	printf("��ȩ ��°�� double �Ǽ� �Է�: ");
	scanf_s("%lf", &f2);

	printf("\n%hd, %d, %d, %d, %c, %c, %c, %o, %x\n", sh1, d1, d2, d3, ch1, ch2, ch3, d4, d5);
	printf("%10ld, %10lld, %10.2f, %10.2lf\n", e1, e2, f1, f2);

	return 0;
}