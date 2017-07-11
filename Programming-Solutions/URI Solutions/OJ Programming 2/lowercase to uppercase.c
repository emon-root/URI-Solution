#include<stdio.h>

void main()
{
    char ch[30];
    int i, t;
    scanf("%d", &t);
    for(i=1; i<=t;i++){
    scanf("%s", ch);
    printf("Case %d : %s\n", i, strupr(ch));
    }
    return 0;
}
