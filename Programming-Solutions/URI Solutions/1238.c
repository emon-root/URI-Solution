#include<stdio.h>

int main()
{
    char str[50], change[50];
    int i, j, len1, len2, t, temp;
    scanf("%d", &t);
    while(t--){
        gets(str);
        gets(change);
        len1=strlen(str);
        len2=strlen(change);
        if(len1<len2){
            len1 = temp;
            len1 = len2;
            len2 = temp;
        }
        for(i=0; i<len1; i++){
            if(i%2==0){
                if(str[i]=='\0'){
                    printf("%c", change[i]);
                }
                else
                    printf("%c", str[i]);
            }
            else
                    printf("%c", change[i]);
    }
    printf("\n");
    }
    return 0;
}
