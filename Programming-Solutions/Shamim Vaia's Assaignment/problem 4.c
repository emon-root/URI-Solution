#include<stdio.h>

int main()
{
    int num, i, k;
    while(scanf("%d", &num)==1){
        for(i=1;i<=num/2; i++){
            k=0;
            if(i*i==num){
                k=1;
                break;
            }
        }
    if(k==1){
        printf("%d is square of %d\n", num, i);
    }
    else
        printf("%d is not a square number.\n", num);
    }
    return 0;
}
