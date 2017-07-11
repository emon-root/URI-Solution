#include<stdio.h>
int main()
{
    double i, extra;
    scanf("%lf", &i);
    if(i>=0 && i<=400.0){
        extra=(i*15)/100;
        i = i+extra;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %c\n",i,extra,'%');
    }
    else if(i<=800.0){
        extra=(i*12)/100;
        i = i+extra;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %c\n",i,extra,'%');
    }
    else if(i<=1200.0){
        extra=(i*10)/100;
        i = i+extra;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %c\n",i,extra,'%');
    }
    else if(i<=2000.0){
        extra=(i*7)/100;
        i = i+extra;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %c\n",i,extra,'%');
    }
    else if(i>2000.0){
        extra=(i*4)/100;
        i = i+extra;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %c\n",i,extra,'%');
    }
    return 0;
}
