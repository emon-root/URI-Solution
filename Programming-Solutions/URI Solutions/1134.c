#include<stdio.h>

int main()
{
    int i, alchohol=0, gas=0, disel=0;
    while(1)
    {
        scanf("%d", &i);
        if(i>=0)
        {
            if(i==1)
            {
                alchohol++;
            }
            else if(i==2)
            {
                gas++;
            }
            else if(i==3)
            {
                disel++;
            }
            else if(i==4)
            {
                printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", alchohol, gas, disel);
                break;
            }
        }
        else
            break;
    }
    return 0;
}
