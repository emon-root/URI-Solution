#include<stdio.h>

int main()
{
    int i;
    double n, arr[100], j;
    scanf("%lf", &n);
    for(i=0; i<100; i++){
        arr[i]=n;
        n=n/2;
    }
    for(i=0; i<100; i++){
        printf("N[%d] = %.4lf\n", i, arr[i]);
    }
    return 0;
}
