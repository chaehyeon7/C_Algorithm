#include <stdio.h>

int main(void) {
	char ch1 = 'k', ch2 = 135;
	int m = 567, n = -567;
	float f1 = 98765.6789;
	double d1 = 12345678901234567890.123;

	printf("\n출력결과\n\n");
	printf("1. ch1 = %c, ch1 = %d, ch2 = %d\n", ch1, ch1, ch2);
	printf("2. ch1 = %#o, ch1 = %#X\n", ch1, ch1);
	printf("3. |%-+10d|, |%10d|, |%+010d|\n", m, m, m);
	printf("4. |%010d|, |%-10d|\n", n, n);
	printf("5. |%f|, |%10.2f|, |%+10.2f|, |%-+10.2f|\n", f1, f1, f1, f1);
	printf("6. |%lf|, |%10.2lf|\n", d1, d1);
	printf("7. |%10.3g|, |%e|\n", f1, f1);
	printf("8. |%G|, |%e|, |%E|\n", d1, d1, d1);

	return 0;
}