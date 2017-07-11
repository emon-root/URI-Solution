#include<stdio.h>
#include<string.h>
int main() {
    int n, i;
    char s[11] = "Feliz nata";
    scanf("%d", &n);
    for(i = 1;i < n; i++)
         s += 'a';
    printf("%s l!\n", s);

    return 0;
}
