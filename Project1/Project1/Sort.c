# include<stdio.h>

void InsertimSort(int a[], int n) {
	int i, j, key; 

	for (i = 1; i < n; i++ ) {
		key = a[i];
		for (j = i - 1; j >= 0; j--) {
			if (key >= a[j]) break;
			else a[j + 1] = a[j];
		}
		a[j + 1] = key;
	}
}

int main(void) {
	int a[] = { 25,107,14,13,10,18,100,90,85,98 };
	int n = sizeof(a) / sizeof(int);

	InsertimSort(a, n);
	printf("»ðÀÔÁ¤·Ä");
	for (int i = 0; i < n; i++)printf("%5d", a[i]);
	return 0;
}