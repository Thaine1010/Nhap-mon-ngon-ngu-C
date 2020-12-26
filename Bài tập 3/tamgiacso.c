#include <stdio.h>

int main(){
int i,n,cout;
 //nhap n vao man hinh
 printf("Nhap n =");
 scanf("%d",&n);
 //vong lap theo hang
   for(cout=1;cout<=n;cout++){
   //vong lap theo so
     for (i=1;i<=cout;i++){
     printf("%d",i);
    }
   //xuatra man hinh
   printf ("\n");
   }
 getchar();
 return 0;
  }
