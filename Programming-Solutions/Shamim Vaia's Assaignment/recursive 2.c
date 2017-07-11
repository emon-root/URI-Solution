#include<stdio.h>

int Fibbonicci(int n){
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return Fibbonicci(n-1) + Fibbonicci(n-2);
}
int main()
{
    int c, i, j=0;
    scanf("%d", &c);
    for(i=1; i<=c; i++){
        printf("%d ", Fibbonicci(j));
        j++;
    }
    return 0;
}
