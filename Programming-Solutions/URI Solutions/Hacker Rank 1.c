#include<stdio.h>

int main()
{
    char str[10];
    int t, i;
    scanf("%d", &t);
    getchar();
    for(i=1; i<=t; i++){
        gets(str);
        str[0] = str[0]-32;
        printf("Welcome %s\n", str);
    }
    return 0;
}
