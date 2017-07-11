#include<stdio.h>

int main()
{
    int k, num, i;
    scanf("%d", &num);
    for(i=2; i<=num/2; i++){
        k=0;
        if(num%2==0){
            k=1;
            break;
        }
    }
    if(k==0){
        printf("%d is prime number.\n", num);
    }
    else
        printf("%d is not a prime number.\n", num);
    return 0;
}
