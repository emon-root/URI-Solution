#include<stdio.h>
#define pi 3.14159

int main()
{
    double R;
    scanf("%lf", &R);
    R = pi*R*R;
    printf("A=%.4lf\n",R);
    return 0;
}
