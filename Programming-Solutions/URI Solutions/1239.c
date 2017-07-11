#include<stdio.h>
#include<string.h>

int main()
{
    char str[51];
    int i, j, k, len;
    while(gets(str)){
            j=2;
            k=2;
        len = strlen(str);
        for(i=0; i<len; i++){
            if(str[i]=='_'){
                if(j%2==0){
                   printf("<i>");
                }
                else{
                printf("</i>");
                }
                j++;
            }
            else if(str[i]=='*'){
                if(k%2==0){
                    printf("<b>");
                }
                else{
                    printf("</b>");
                }
                k++;
            }
            else{
                printf("%c", str[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
