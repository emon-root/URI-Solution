#include<stdio.h>

int main()
{
    int T, i, b, c, count;
    long long int a, sum;
    scanf("%d", &T);
    for(i=1; i<=T; i++){
            count = 0;
            scanf("%lld%d%d", &a, &b, &c);
        if(b>c){

        count = (a / (b-c) ) + (( a % (b-c))>0 && ( a % (b-c)) < b ) ;
        printf("Case %d: %d\n", i, count);

        }
        else
            printf("Case %d: INF\n", i);
    }
    return 0;
}
