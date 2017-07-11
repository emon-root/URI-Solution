#include<stdio.h>

int main()
{
    int num;
    while(scanf("%d", &num)==1){
        if(num%2==0){
            printf("Even\n");
        }
        else
            printf("Odd\n");
    }
    return 0;
}
