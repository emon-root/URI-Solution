#include<stdio.h>

int main()
{
    int half, i;
    char str[11];
    gets(str);
    half = strlen(str);
    for(i=0; i<half/2; i++){
        printf("%c", str[i]);
    }
    return 0;
}
