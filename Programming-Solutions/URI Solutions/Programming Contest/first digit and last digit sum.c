#include <stdio.h>

int main()
{
    int i, n, sum=0;

    printf("Enter any number to find sum of first and last digit: ");
    scanf("%d", &n);
    if(n>10){
        sum += n % 10;
    }
    while(n>=10){
        n = n / 10;
    }
    sum += n;
    printf("%d", sum);

    return 0;
}
