#include <stdio.h>

int main()
{
	int n;
    int a[100];
    int i;
    int m;
    int t, k, temp;
    scanf("%d %d", &n, &m);
    for(i = 1; i < n + 1; i++){
        a[i - 1] = i;
    }
    for(i = 0; i < m; i++){
        scanf("%d %d", &t, &k);
        temp = a[t - 1];
        a[t - 1] = a[k - 1];
        a[k - 1] = temp;
    }
    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}
