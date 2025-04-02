#include <stdio.h>
int main(void)
{
	int n;
	scanf("%d", &n);
	int a[100];
	int i;
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	int c;
	int cnt = 0;
	scanf("%d", &c);
	for (i = 0; i < n; i++)
		if (a[i] == c) {
			cnt++;
		}
	printf("%d", cnt);
}
