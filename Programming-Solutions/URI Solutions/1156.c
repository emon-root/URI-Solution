#include<stdio.h>
int main()
{
    float sum=0, i, j=1;
    for(i=1,j=1 ; i<=20,j<=10000000; i=i+2,j=j*2){
        sum+=(i/j);
        if(i>39){
            break;
        }
    }
    printf("%.2f\n",sum);
    return 0;
}
