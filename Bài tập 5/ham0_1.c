#include<stdio.h>
int sum(int a,int b,int c);//khai bao ham sum
//khai bao ham main
int main(){
  int a=3,b=4,c=5;
  printf("a+b+c=%d",sum(a,b,c));
  return 0;
}
//khoi dinh nghia ham
int sum(int a,int b,int c){//dinh nghia ham sum
return a+b+c;
}
