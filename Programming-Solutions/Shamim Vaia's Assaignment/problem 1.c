#include<stdio.h>

int main()
{
    int num;
    while(scanf("%d",&num)==1){
        if(num%2==0){
            printf("%d is even number.\n", num);
        }
        else
            printf("%d is odd number.\n", num);
    }
    return 0;
}
