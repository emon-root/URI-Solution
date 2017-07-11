#include<stdio.h>

int main()
{
    int num1, num2, temp;
    while(scanf("%d%d", &num1, &num2)==2){
            temp=num1;
            num1=num2;
            num2=temp;
            printf("%d %d\n", num1, num2);
    }
    return 0;
}
