#include<stdio.h>
#include<stdbool.h>

int main()
{
    int n, z;
    char arr[10];
    scanf("%d %s",&n, arr);
    if(arr[0]=='t')
        z=1;
    else
        z=0;
    if(n==1)
    {
        if(z==0)
        {
            printf("7:00\n");
        }
        else if(z==1)
        {
            printf("10:00\n");
        }
    }
    else if(n==2)
    {
        if(z==0)
        {
            printf("7:00\n");
        }
        else if(z==1)
        {
            printf("10:00\n");
        }
    }
    else if(n==3)
    {
        if(z==0)
        {
            printf("7:00\n");
        }
        else if(z==1)
        {
            printf("10:00\n");
        }
    }
    else if(n==4)
    {
        if(z==0)
        {
            printf("7:00\n");
        }
        else if(z==1)
        {
            printf("10:00\n");
        }
    }
    else if(n==5)
    {
        if(z==0)
        {
            printf("7:00\n");
        }
        else if(z==1)
        {
            printf("10:00\n");
        }
    }
    else if(n==6)
    {
        if(z==0)
        {
            printf("7:00\n");
        }
        else if(z==1)
        {
            printf("10:00\n");
        }
    }
    if(n==0)
    {
        if(z==0)
        {
            printf("10:00\n");
        }
        else if(z==1)
        {
            printf("10:00\n");
        }
    }
    return 0;
}
