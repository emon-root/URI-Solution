#include<stdio.h>

int main()
{
    int T, i, a, R=0, S=0, C=0, Total=0;
    double Sav, Rav, Cav;
    char input, chr = 'R', chs = 'S', chc = 'C';
    scanf("%d", &T);
    for(i=1; i<=T; i++){
        scanf("%d %c", &a, &input);
        Total +=a;
        if(input == chr){
            R+=a;
        }
        else if(input==chs){
            S+=a;
        }
        else if(input==chc){
            C+=a;
        }
    }
        Rav=(100.00/Total)*R;
        Cav=(100.00/Total)*C;
        Sav=(100.00/Total)*S;
        printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2lf %c\nPercentual de ratos: %.2lf %c\nPercentual de sapos: %.2lf %c\n", Total,C,R,S,Cav,'%',Rav, '%', Sav, '%' );

    return 0;
}
