#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
  int score[5];
  int a;

  for(a = 0;a < 5;++a){
    scanf("%d",&score[a]);}
  for(a =0;a < 5;++a){
    printf("score[%d] = %d\n", a,score[a]);
  }

  int total = 0;
  for(a =0;a < 5;++a){
        total = total + score[a];
  }

  int average = total / 5;
  printf("Average :%d\n",average);

return 0;
}
