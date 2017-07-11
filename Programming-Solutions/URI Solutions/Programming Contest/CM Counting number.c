#include<stdio.h>

int main(){

  int T,n, tmp, t, i;
  scanf("%d",&T);
  for(t = 1; t <= T; t++){
    int cnt[101] = {0};
    scanf("%d",&n);
    for(i = 0; i < n; i++){
      scanf("%d",&tmp);
      cnt[tmp]++;
    }
    int high = 0,marks;
    for(i = 0; i <= 100; i++){
      if(cnt[i] >= high){
        high = cnt[i];
        marks = i;
      }
    }
    printf("Case %d: %d %d\n",t,marks,high);
  }
  return 0;
}
