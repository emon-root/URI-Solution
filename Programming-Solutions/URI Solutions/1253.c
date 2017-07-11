#include<stdio.h>

int main()
{
    char str[51];
    int T, i, j, m;
    scanf("%d", &T);
    for(j=1; j<=T; j++){
        scanf("%s", &str);
        scanf("%d", &m);
        for(i=0; i<50; i++){
            if(str[i] == '\0')
                break;
            if((str[i] - m) < 65)
                printf("%c", (str[i] - m)+ 26);
            else
                printf("%c", (str[i] - m));
        }
        printf("\n");
    }
    return 0;
}
