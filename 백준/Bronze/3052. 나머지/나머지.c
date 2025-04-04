#include <stdio.h>

int main()
{
	int a[10];
	int i, n, j, k;
	for (i = 0; i < 10; i++) {
		scanf("%d", &n);
		a[i] = n;
	}
	int cnt = 0;
	int sum = 0;
	for (j = 0; j < 10; j++) {
		for (k = j + 1; k < 10; k++) {
            if(j == 9) break;
			if ((a[j] % 42) == (a[k] % 42)) {
				cnt++;
			}
		}
		if (cnt == 0) {
			sum++;
        }
		cnt = 0;
	}
	printf("%d", sum);
}