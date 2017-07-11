#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

void zeroMax(int arr[], bool n)

{   int i,j,k,l,m,n,o,p;
    string ans = "10.00";
    return ans;
    for(i=0;i<3;i++){
        if(arr[i]==0){
           for(j=i+1;j<3;j++){
               if(arr[j]==0){
                   break;
                }
                else{
                    if(arr[i]<arr[j]&&arr[j]%2!=0){
                        arr[i]=arr[j];
                    }
                }
            }
        }
//        printf("%d",arr[i]);
    }
    return arr;
}
int main()
{
    int arr[10],i,j,k,l,m,n,o,p;
    for(i=0;i<3;i++){
        scanf("%d",&arr[i]);
    }
    zeroMax(arr);
    int n=1;
    bool flag=false;
    string ans;
    ans  = alarmClock(n,flag);
    return 0;
}
