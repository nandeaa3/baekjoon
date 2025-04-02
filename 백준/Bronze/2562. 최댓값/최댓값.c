#include <stdio.h>

int main()
{
	int i, n;
	int a[9];
	for (i = 0; i < 9; i++) {
		scanf("%d", &a[i]);
	}
	int max = a[0];
	int cnt;
	for (i = 0; i < 9; i++) {
		if (max <= a[i]) {
			max = a[i];
			cnt = i + 1;
		}
	}
	printf("%d\n%d", max, cnt);
}