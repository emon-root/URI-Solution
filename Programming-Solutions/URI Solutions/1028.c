#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int omg;
    omg = divi(a, b);
    printf("%d\n", omg);
    return 0;
}
int divi(int dividendo, int divisor)
{
    int c;
    if(divisor<dividendo){
        while(dividendo % divisor != 0){
            c = dividendo % divisor;
            dividendo = divisor;
            divisor = c;
            return divisor;
        }
    }
    else if(divisor>dividendo){
        while(divisor % dividendo != 0){
            c = divisor % dividendo;
            divisor = dividendo;
            dividendo = c;
            return dividendo;
        }
    }
}
