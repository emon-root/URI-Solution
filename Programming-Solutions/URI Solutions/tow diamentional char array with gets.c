#include<stdio.h>

int main()
{
    int i;
    char ch[4][40];
    for(i=0;i<3; i++){
//       gets(ch[i]);
    scanf("%s",&ch[i]);
    }

    for(i=0;i<3; i++){
//       puts(ch[i]);
    printf("%s \n",ch[i]);
    }
    return 0;
}

