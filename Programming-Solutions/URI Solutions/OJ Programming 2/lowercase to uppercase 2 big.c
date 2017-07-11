#include <stdio.h>
#include <ctype.h>

int main(){
    char inputString[100];
    int index;
    gets(inputString);
    for(index=0; inputString[index] != '\0'; index++){
        if(islower(inputString[index])){
            inputString[index] = toupper(inputString[index]);
        } else {
            inputString[index] = inputString[index];
        }
    }
    inputString[index] = '\0';
    printf("%s \n", inputString);
    return 0;
}
