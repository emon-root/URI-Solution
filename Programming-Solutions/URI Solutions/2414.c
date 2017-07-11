#include<stdio.h>

int main()
{
    int n, largest= -1000;
    while(scanf("%d", &n)==1){
        if(n==0) break;
        if(n>largest){
            largest = n;
        }
    }
    printf("%d\n", largest);
    return 0;
}
