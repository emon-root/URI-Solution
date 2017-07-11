#include <stdio.h>

int main()
{
    int start, startm, end, endm, real, realm;
    scanf("%d %d %d %d", &start, &startm, &end, &endm);
    real = end - start;
    if (real < 0){
        real = 24 + (end - start);
    }
    realm = endm - startm;
    if (realm < 0){
        realm = 60 + (endm - startm);
        real--;
    }
    if (end == start && endm == startm){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", real, realm);
    return 0;
}
