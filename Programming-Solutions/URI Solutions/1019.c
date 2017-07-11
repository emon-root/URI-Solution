#include<stdio.h>

int main()
{
    int N, hours, minutes, seconds;
    scanf("%d", &N);
    hours = N / 3600;
    N = N - (hours * 3600);
    minutes = N / 60;
    N = N - (minutes * 60);
    seconds = N ;
    printf("%d:%d:%d\n",hours, minutes, seconds);
    return 0;
}
