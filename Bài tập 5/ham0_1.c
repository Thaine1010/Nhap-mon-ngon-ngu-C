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
 khong dung kieu du lieu tra ve (void)
   // khoi khai bao 
#include<stdio.h>
void sum(int a, int b, int c);


// khoi ham main
int main(){
int x = 1, y = 2, z = 3;
sum(x , y ,z);


  return 0; 
}

void sum(int a, int b , int c){
  int d = a + b + c;
 printf("tong la: %d", d);
}
// khoi dinh nghia ham
