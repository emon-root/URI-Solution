#include <stdio.h>

/* function declaration */
/* function returning the max between two numbers */
int max(int num1, int num2) {

   /* local variable declaration */
   int result;

   if (num1 > num2)
      result = num1;
   else
      result = num2;

   return result;
}
int main() {

   /* local variable definition */
    int a, b;
    int ret;
    scanf("%d%d", &a, &b);
   /* calling a function to get max value */
   ret = max(a, b);

   printf( "Max value is : %d\n", ret );

   return 0;
}


