#include<stdio.h>

int main()
{
    int T, n, i, sum, t, j;
    scanf("%d", &T);
    for(i=1; i<=T; i++){
        sum = 0;
        scanf("%d", &n);
        for(j=1; j<=n; j++){
            scanf("%d", &t);
            sum+=t;
        }
        printf("Case %d: %d\n",i, sum);
    }
    return 0;
}
