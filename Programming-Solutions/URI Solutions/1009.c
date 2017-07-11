#include<stdio.h>

int main()
{
    char str[11];
    double SALARY, T_SALARY;
    scanf("%10[0-9a-zA-Z ]", str);
    scanf("%lf%lf", &SALARY, &T_SALARY);
    T_SALARY = (T_SALARY * 15)/100;
    SALARY = SALARY + T_SALARY;
    printf("TOTAL = R$ %.2lf\n", SALARY);
    return 0;
}
