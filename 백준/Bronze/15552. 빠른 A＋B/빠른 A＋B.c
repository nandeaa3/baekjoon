#include <stdio.h>
int main(void)
{
	int N;
    scanf("%d", &N);
    int i;
    int n, m;
    int sum = 0;
    for(i = 0; i < N; i++){
        scanf("%d %d", &n, &m);
        sum = n+ m;
        printf("%d\n", sum);
    }
}