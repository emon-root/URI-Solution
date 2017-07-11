#include<stdio.h>

int main()
{
    int i;
    scanf("%d", &i);
    if(i==61){
        printf("Brasilia\n");
    }
    else if(i==71){
        printf("Salvador\n");
    }
    else if(i==11){
        printf("Sao Paulo\n");
    }
    else if(i==21){
        printf("Rio de Janeiro\n");
    }
    else if(i==32){
        printf("Juiz de Fora\n");
    }
    else if(i==19){
        printf("Campinas\n");
    }
    else if(i==27){
        printf("Victoria\n");
    }
    else if(i==31){
        printf("Belo Horizonte\n");
    }
    else if(i!=61 && i!=71 && i!=11 && i!=21 && i!=32 && i!=19 && i!=27 && i!=31){
        printf("DDD nao cadastrado\n");
    }
    return 0;
}
