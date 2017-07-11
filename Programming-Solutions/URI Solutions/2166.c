#include<stdio.h>

int main()
{
    double n, result=0.0;
    scanf("%lf", &n);
    while(n--){
        result += 2.00;
        result = 1.00/result;
    }
    result += 1.00;
    printf("%.10lf\n", result);
    return 0;
}
