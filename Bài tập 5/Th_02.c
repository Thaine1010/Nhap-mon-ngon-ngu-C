#include <stdio.h>
int n,tong=0;
int i;
int main(){
printf("Nhap so bat ki n=");
scanf("%d",&n);
 for (i=0;i<n;i++){
   tong=tong+i+1;  
}
 printf("tong cac so can tim &d %d",tong);
return 0;
}
