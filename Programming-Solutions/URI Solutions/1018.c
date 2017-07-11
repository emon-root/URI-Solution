#include<stdio.h>

int main()
{
    int N,Hun, Fif, Twi, Ten, Fiv, Two;
    scanf("%d", &N);
    Hun = N / 100;
    N = N - (Hun *100);
    Fif = N / 50;
    N = N - (Fif * 50);
    Twi = N/20;
    N = N - (Twi * 20);
    Ten = N / 10;
    N = N - (Ten * 10);
    Fiv = N / 5;
    N = N - (Fiv * 5);
    Two = N / 2;
    N = N-(Two * 2);
    printf("%d nota(s) de R$ 100,00\n", Hun);
    printf("%d nota(s) de R$ 50,00\n", Fif);
    printf("%d nota(s) de R$ 20,00\n", Twi);
    printf("%d nota(s) de R$ 10,00\n", Ten);
    printf("%d nota(s) de R$ 5,00\n", Fiv);
    printf("%d nota(s) de R$ 2,00\n", Two);
    printf("%d nota(s) de R$ 1,00\n", N);
return 0;
}
