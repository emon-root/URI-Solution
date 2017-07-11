#include<stdio.h>
#define A 3.14159

int main()
{
    double R;
    scanf("%lf", &R);
    R = A*R*R;
    printf("A=%.4lf\n", R);
    return 0;
}
