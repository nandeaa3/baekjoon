#include <stdio.h>
int main(void)
{
	int n, m;
    scanf("%d %d", &n, &m);
    long long int a[10000];
    int i;
    for(i = 0; i < n; i++){
        scanf("%lld", &a[i]);
    }
    for(i = 0; i < n; i++){
        if(a[i] < m){
            printf("%d ", a[i]);
        }
    }
}
