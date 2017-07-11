#include<stdio.h>

int main()
{
    int t, i, X, Y, coin;
    while(scanf("%d", &t)==1){
    if(t==0) break;
    X=0; Y=0;
    for(i=1; i<=t; i++){
        scanf("%d", &coin);
        if(coin==0){
            X++;
        }
        else if(coin==1){
            Y++;
        }
    }
    printf("Mary won %d times and John won %d times\n", X, Y);
    }
    return 0;
}
