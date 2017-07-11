#include<stdio.h>

int main()
{
    int len, i;
    char str[100], str2[100];
    scanf("%s", str);
    len = strlen(str);
    for(i=0; i<len/2; i++){
        str2[i] = str[i];
    }
    str2[len/2]=' ';
    printf("%s", str2);
    return 0;
}
