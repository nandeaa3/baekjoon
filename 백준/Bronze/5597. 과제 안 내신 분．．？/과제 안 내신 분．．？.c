#include <stdio.h>

int main()
{
	int a[30];
    int i, j, k;
    int n;
    for(i = 0; i < 28; i++){
        scanf("%d", &n);
        a[i] = n;
    }
    int cnt = 0;
    for(j = 1; j <= 30; j++){
        for(k = 0; k < 30; k++){
            if(j == a[k]){
                cnt += 1;
            }
        }
        if(cnt == 0){
            printf("%d\n", j);
        }
        cnt = 0;
    }
}