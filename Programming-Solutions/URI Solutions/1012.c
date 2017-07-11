#include<stdio.h>
#define pi 3.14159

int main()
{
    double A, B, C, Tri, Cir, Tra, Squ, Rec;
    scanf("%lf%lf%lf", &A, &B, &C);
    Tri = (1.0/2.0)*A*C;
    Cir = pi * C * C;
    Tra = (1.0/2.0)*(A+B)*C;
    Squ = B*B;
    Rec = A*B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",Tri,Cir, Tra, Squ, Rec);
    return 0;
}
