#include<stdio.h>

int main()
{
    int hundred ,fifty , twenty , ten ,five , two, coin1, coin2 ,coin3 ,coin4 ,coin5;
    float  input , coin6;
    scanf("%f",&input);
    hundred=(input/100);
    fifty=(input-(hundred*100))/50;
    twenty=(input-((fifty*50)+(hundred*100)))/20;
    ten=(input-((twenty*20)+(fifty*50)+(hundred*100)))/10;
    five=(input-((ten*10)+(twenty*20)+(fifty*50)+(hundred*100)))/5;
    two=(input-((five*5)+(ten*10)+(twenty*20)+(fifty*50)+(hundred*100)))/2;
    coin1=(input-((two*2)+(five*5)+(ten*10)+(twenty*20)+(fifty*50)+(hundred*100)));
    coin2=(input-((coin1*1.00)+(two*2)+(five*5)+(ten*10)+(twenty*20)+(fifty*50)+(hundred*100)))/0.5;
    coin3=(input-((coin2*0.5)+(coin1)+(two*2)+(five*5)+(ten*10)+(twenty*20)+(fifty*50)+(hundred*100)))/0.25;
    coin4=(input-((coin3*0.25)+(coin2*0.5)+(coin1)+(two*2)+(five*5)+(ten*10)+(twenty*20)+(fifty*50)+(hundred*100)))/0.10;
    coin5=(input-((coin4*0.10)+(coin3*.25)+(coin2*0.5)+(coin1)+(two*2)+(five*5)+(ten*10)+(twenty*20)+(fifty*50)+(hundred*100)))/0.05;
    coin6=(input-((coin5*0.05)+(coin4*.10)+(coin3*.25)+(coin2*0.5)+(coin1)+(two*2)+(five*5)+(ten*10)+(twenty*20)+(fifty*50)+(hundred*100)))/0.01;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",hundred);
    printf("%d nota(s) de R$ 50.00\n",fifty);
    printf("%d nota(s) de R$ 20.00\n",twenty);
    printf("%d nota(s) de R$ 10.00\n",ten);
    printf("%d nota(s) de R$ 5.00\n",five);
    printf("%d nota(s) de R$ 2.00\n",two);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",coin1);
    printf("%d moeda(s) de R$ 0.50\n",coin2);
    printf("%d moeda(s) de R$ 0.25\n",coin3);
    printf("%d moeda(s) de R$ 0.10\n",coin4);
    printf("%d moeda(s) de R$ 0.05\n",coin5);
    printf("%.0f moeda(s) de R$ 0.01\n",coin6);
    return 0;
}
