#include<stdio.h>

int main()
{

    int arr[1000], i=0;
    double sum=0, avg;
    do{
            scanf("%d", &arr[i]);
            if(arr[i]>=0){
               sum+=arr[i];
                i++;
            }
            else
                break;
    }while(1);
    avg = (sum/i);
    printf("%.2lf\n", avg);
    return 0;
}
