#include<stdio.h>

int main()
{
    int i, j, N, X, count=0;
    scanf("%d", &N);
    for(i=1; i<=N; i++){
        scanf("%d", &X);
        for(j=2; j<=X/2; j++){
            if(X%j==0){
                count=1;
                break;
            }
            else{
                count=0;
            }
        }
        if(count==1){
        printf("%d nao eh primo\n", X);
        }
        else if(count==0){
        printf("%d eh primo\n", X);
        }
    }
    return 0;
}
