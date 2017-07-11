#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    while(N--){
        double A, B, C;
        scanf("%lf%lf%lf", &A, &B, &C);
        A = (A*2+B*3+C*5)/(10);
        printf("%.1lf\n",A);
    }
    return 0;
}
