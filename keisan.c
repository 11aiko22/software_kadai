/*

ソフトウェア工学Ⅰ
「課題３ ソフトウェア開発」のためのプログラム


[実行結果]
２つの値の四則計算した結果を出力する。
x = 6
y = 2
足し算 x + y = 8
引き算 x - y = 4
かけ算 x * y = 12
割り算 x / y = 3
*/





#include <stdio.h>
#include <stdlib.h>

int main(){
  int x,y;
  int ans1,ans2,ans3,ans4;

  printf("２つの値の四則計算した結果を出力する。\n");
  printf("x = ");
  scanf("%d",&x);
  printf("y = ");
  scanf("%d",&y);

  ans1 = x + y;
  ans2 = x - y;
  ans3 = x * y;
  ans4 = x / y;

  printf("足し算 x + y = %d\n",ans1);
  printf("引き算 x - y = %d\n",ans2); 
  printf("かけ算 x * y = %d\n",ans3); 
  printf("割り算 x / y = %d\n",ans4);

}
