#include <stdio.h>
int main(void)
{
	int X;
	scanf("%d", &X);
	int N;
	scanf("%d", &N);
	int i;
	int obj, cnt;
	int sum = 0;
	for (i = 0; i < N; i++) {
		scanf("%d %d", &obj, &cnt);
		sum += obj * cnt;
	}
	if (sum == X){
       printf("Yes");
    }
    else {printf("No");}
}