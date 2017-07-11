#include<stdio.h>
#include<string.h>


int main()
{
    char str[51];
    int i, j, len;
    while(gets(str)){
        len = strlen(str);
        for(i=0; i<len; i++){
            if(str[i]>='a' && str[i]<='z'){
                    if(str[i]<'n'){
                        printf("%c", str[i]+13);
                    }
                    else{
                        printf("%c", (str[i]+13)-26);
                    }
            }
            else if(str[i]>='A' && str[i]<='Z'){
                 if(str[i]<'N'){
                        printf("%c", str[i]+13);
                    }
                    else{
                        printf("%c", (str[i]+13)-26);
                    }
            }
            else{
                printf("%c", str[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
