#include <stdio.h>

int main(void) {
	char ch1, ch2;
	int a1, a2, a3;
	float f1 = 12345.12345f; //���� f�� ���� ������?  =  double �� �� ũ�Ƿ� float���� ���� �����Ͱ� ©���Ƿ� �ڿ� f�� �����ش�.
	double d1 = 12345.12345;

	printf("ù ��° ���� 38�� �Է�: ");
	scanf_s("%d", &a1);

	printf("�� ��° ���� 3�� �Է�: ");
	scanf_s("%d", &a2);
	getchar();  //����Ű�� ���� ������ ���� getchar���

	printf("���� G�� �Է�: ");
	scanf_s("%c", &ch1, 1);
	getchar();

	printf("���� M�� �Է�: ");
	scanf_s("%c", &ch2, 1);

	printf("\n1. a1 = %d, a2 = %d, ch1 = %c, ch2 = %c, f1 = %f, d1 = %lf\n", a1, a2, ch1, ch2, f1, d1);

	printf("\n2. a1 + ch1 = %d\n", a1 + ch1);

	printf("\n3. ch1 + a2 = %c\n", ch1 + a2);

	printf("\n4. a1 == a2 : %d\n", a1 == a2);

	printf("\n5. f1 == d1 : %d\n", f1 == d1);

	printf("\n6. a1 != a2 : %d\n", a1 != a2);

	printf("\n7. a1 >= a2 * ch1: %d\n", a1 >= a2 * ch1);

	printf("\n8. a1 >= a2 * ch1 && a1 == a2: %d\n", a1 >= a2 * ch1 && a1 == a2);

	a3 = a1++ - ++a2;
	printf("\n9. a1 = %d, a2 = %d, a3 = %d\n", a1, a2, a3);

	a1 = 65; a2 = 50;
	a3 = (a1 > a2 + ch1) ? a1 + ch1 : a2 + ch1;

	printf("\n10. a1 = %d, a2 = %d, a3 = %c\n", a1, a2, a3);

	printf("\n11. a1 << 2 = %d\n", a1 << 2);

	a1 = 67; a2 = 5;
	a1 = a1 << 2;

	printf("\n12. a1 >> a2 = %d\n", a1 >> a2);

	printf("\n13. !f1 = %d, ch1 || ch2 = %d\n", !f1, ch1 || ch2);

	printf("\n14. ch1 & ch2 = %d\n", ch1 & ch2);

	printf("\n15. ch1 | ch2 = %d\n", ch1 | ch2);

	printf("\n16. ch1 ^ ch2 = %d\n", ch1 ^ ch2);

	printf("\n17. %d, %d, %d, %d, %d, %d\n", sizeof(char), sizeof(short), sizeof(int), sizeof(long long), sizeof(float), sizeof(double));

	a3 = a1-- + --a2;
	printf("\n18. a1 = %d, a2 = %d, a3 = %d\n", a1, a2, a3);

	a1 = 1;
	printf("\n19. %d\n", 1 << 31 & a1 ? 1 : 0);

	a1 = -1;
	printf("\n20. %d\n", a1 ^ ~a1);

	printf("\n21. %d, %d, %8.2f\n", ch1 > ch2 - 3, a3 / 5, a3 / 5.0);

	printf("\nch1 = ch2 = NULL; ������ ���(warning) �߻�. ������ NULL�� �ּ� ������ �ش��ϴ� ���̹Ƿ�\n");
	ch1 = ch2 = '\0';

	printf("\na1= a2 = a3 = NULL; ������ ���(warning) �߻�. ������ NULL�� �ּ� ������ �ش��ϴ� ���̹Ƿ�\n");
	a1 = a2 = a3 = 0;

	return 0;
}