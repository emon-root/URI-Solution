#include<stdio.h>
int main()
{
    double i, extra, f, s, t ;
    scanf("%lf", &i);
    if(i>=0 && i<=2000.0){
        printf("Isento\n");
    }
    else if(i<=3000.0){
        i = i - 2000.00;
        extra=(i*8)/100;
        printf("R$ %.2lf\n",extra);
    }
    else if(i<=4500.0){
            f = (i-2000.00);
            s = (f-1000.00);
            f = (f*8.0)/100.0;
            s = (s*18.0)/100.0;
            extra = f + s;
            printf("%.2lf\n", extra);
        }
        else if(i>4500.0){
            f = (i-2000.00);
            s = (f-1000.00);
            t = (s-1500.0);
            f = (f*8.0)/100.0;
            s = (s*18.0)/100.0;
            t = (t*28.0)/100;
            extra = f+s+t;
            printf("%.2lf\n",extra);
   }
    return 0;
}
