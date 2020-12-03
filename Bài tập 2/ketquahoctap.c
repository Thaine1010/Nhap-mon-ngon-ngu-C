#include <stdio.h>

int main(void) {
// khai bao bien Van,Toan la kieu so nguyen
int Van,Toan,V,T;
double DTB;
printf  ("Nhap V =");
scanf  ("%d",& V);
printf (" Nhap T =");
scanf  ("%d",& T);
Van=V;
Toan=T;
// xuat ra man hinh DTB
DTB=(V+T)/2;
printf("Van\tToan\tDTB\n%d\t%d\t%0.1f",Van,Toan,DTB);
return 0 ;
}
