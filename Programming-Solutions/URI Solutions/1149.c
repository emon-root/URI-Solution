#include<stdio.h>
int main()
{
    int X, N, i, sum=0;
    scanf("%d %d", &X, &N);
    while(N<=0)
        scanf("%d", &N);
    for(i=1; i<=N; i++){
        sum+=X;
        X++;
    }
    printf("%d\n", sum);
    return 0;
}
