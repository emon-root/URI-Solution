#include<stdio.h>
void fun(char arr[]){
    strrev(arr);
return ;

}
int main()
{
    char arr[50];
    gets(arr);
    fun(arr);
    printf("%s", arr);

    return 0;
}
