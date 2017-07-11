#include<stdio.h>

int main(){
    float i,tax,in;
    scanf("%f",&i);
    if(i<=2000.00)
        printf("Isento\n");
    else{
        if(i>2000.00 && i<=3000.00){
            in=i-2000.00;
            tax=in/100.00*8.00;
        }
        else if(i>3000.00 && i<=4500.00){
            in=i-3000.00;
            tax=in/100.00*18.00+80.00;
        }
        else{
            in=i-4500.00;
            tax=in/100.00*28.00+350.00;
        }
        printf("R$ %.2f\n",tax);
    }
    return 0;
}
