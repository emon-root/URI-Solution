#include<stdio.h>

int main()
{
    double N,Hun, Fif, Twi, Ten, Fiv, Two, One, a, b, c, d, e;
    scanf("%lf", &N);
    printf("NOTAS:\n");
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
    One = N / 2;
    N = N - (One * 1);
    a = N / .50;
    N = N - (a * .50);
    b = N / .25;
    N = N - (b * .25);
    c = N / .10;
    N = N -(c * .10);
    d = N / .05;
    N = N - (d * .05);
    e = N / .01;
    printf("%lf nota(s) de R$ 100.00\n", Hun);
    printf("%lf nota(s) de R$ 50.00\n", Fif);
    printf("%lf nota(s) de R$ 20.00\n", Twi);
    printf("%lf nota(s) de R$ 10.00\n", Ten);
    printf("%lf nota(s) de R$ 5.00\n", Fiv);
    printf("%lf nota(s) de R$ 2.00\n", Two);
    printf("MOEDAS:\n");
    printf("%lf moeda(s) de R$ 1.00\n", One);
    printf("%lf moeda(s) de R$ 0.50\n", a);
    printf("%lf moeda(s) de R$ 0.25\n", b);
    printf("%lf moeda(s) de R$ 0.10\n", c);
    printf("%lf moeda(s) de R$ 0.05\n", d);
    printf("%lf moeda(s) de R$ 0.01\n", e);

return 0;
}

