#include<stdio.h>
int main()
{
    int i, b, n, X, Y, sum;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        scanf("%d%d", &X, &Y);
        if(X%2==1){
                sum=0;
            for(b=1; b<=Y; b++){
                sum+=X;
                X+=2;
            }
            printf("%d\n", sum);
        }
        else{
            sum = 0;
            X++;
            for(b=1; b<=Y; b++){
                sum+=X;
                X+=2;
            }
            printf("%d\n", sum);
        }
    }
    return 0;
}
