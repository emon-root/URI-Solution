#include<stdio.h>

int main()
{
    int CODE, UNIT;
    float T, PRICE;
    scanf("%d%d%f", &CODE, &UNIT, &PRICE);
    T = UNIT * PRICE;
    scanf("%d%d%f", &CODE, &UNIT, &PRICE);
    PRICE = (UNIT * PRICE) + T;
    printf("VALOR A PAGAR: R$ %.2f\n", PRICE);
    return 0;
}
