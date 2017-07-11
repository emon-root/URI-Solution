#include<stdio.h>

int main()
{
    int i, a, Odd=0, Even=0, Pos=0, Neg=0;
    for(i=1; i<=5; i++){
        scanf("%d",&a);
        if(a%2==0){
            Even+=1;
        }
        if(a%2!=0){
            Odd+=1;
        }
        if(a>0){
            Pos+=1;
        }
        if(a<0){
            Neg+=1;
        }
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", Even, Odd, Pos, Neg);
return 0;
}
