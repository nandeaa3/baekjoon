#include <stdio.h>
int main(void)
{
	int N;
    scanf("%d", &N);
    int i;
    int cnt;
    cnt = N / 4;
    for(i = 0; i < cnt; i++){
        printf("%s", "long ");
    }
    printf("%s", "int");
}