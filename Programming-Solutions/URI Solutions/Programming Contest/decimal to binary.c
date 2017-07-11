#include<stdio.h>

long decimalToBinary(long n) {
    int remainder;
    long binary = 0, i = 1;

    while(n!=0){
        remainder = n%2;
        n = n/2;
        binary+=(remainder*i);
        i = i*10;
    }
    return binary;
}

int main() {
    long dTOn;
    scanf("%ld", &dTOn);
    printf("%ld", decimalToBinary(dTOn));
    return 0;
}
