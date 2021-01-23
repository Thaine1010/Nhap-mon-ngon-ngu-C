#include <stdio.h>
#include <math.h>
int main(){
  int a,b,c;
  float x1,x2,x;
  float delta;
//Nhap vao man hinh
 printf("Nhap a =");
 scanf("%d",&a);
 printf("Nhap b =");
 scanf("%d",&b);
 printf("Nhap c =");
 scanf("%d",&c);
 printf("Phuong trinh giai bat phuong trinh 2 an\n");
 printf("Phuong trinh co dang ax2+bx+c=0\n");
//tinh delta
delta=(b*b)-4*a*c;
// nhung truong hop nghiem cua bat phuong trinh
if(delta>0){
  x1=(-b+sqrt(delta))/(2*a);
	x2=(-b-sqrt(delta))/(2*a);
  printf("phuong trinh %dx2 + %dx + %d = 0 co 2 nghiem\n",a,b,c);
  printf("x1=%f\n",x1);
  printf("x2=%f\n",x2);
}
else if(delta==0){
  x=-b/(2*a);
  printf("phuong trinh %dx2 + %dx + %d =0 co nghiem kep",a,b,c);
  printf("%f\n",x);
} 
else{
  printf("phuong trinh %dx2 + %dx + %d =0 vo nghiem",a,b,c);
}
return 0;
}
