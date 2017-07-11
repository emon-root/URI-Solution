#include<stdio.h>
#include<math.h>

int main()
{
    double A, B, C, r1, r2, D;
    scanf("%lf%lf%lf", &A, &B, &C);
    D=(pow(B,2)-(4*A*C));
    r1=(-B+sqrt(D))/(2*A);
    r2=(-B-sqrt(D))/(2*A);
    if(A!=0 && D>0)
    {
        printf("R1 = %.5lf\nR2 = %.5lf\n",r1,r2);
    }
    else
    {
        printf("Impossivel calcular\n");
    }

    return 0;
}
