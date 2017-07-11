#include<stdio.h>

int main()
{
    int NUMBER, SALARY;
    float PAY;
    scanf("%d%d%f", &NUMBER, &SALARY, &PAY);
    PAY = SALARY * PAY;
    printf("NUMBER = %d\n", NUMBER);
    printf("SALARY = U$ %.2f\n", PAY);
    return 0;
}
