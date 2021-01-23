#include <stdio.h>
// khoi khai bao
 int maxmax(int a,int b,int c);
// khoi khai bao han mian
int main(){
   int a,b,c;
  printf("nhap a:");
  scanf("%d",&a);
  printf("nhap b:");
  scanf("%d",&b);
  printf("nhap c:");
  scanf("%d",&c);
  int i=maxmax(a,b,c);
  printf("so lon nhat trong 3 chu so la %d %d %d  : %d",a,b,c,i);

}
//khoi dinh nghia ham main
int maxmax(int a,int b, int c){
  int max=0;
	if (max < a){
		max=a;
	}
	if (max < b){
		max=b;
	}
	if (max < c){
		max=c;
	}
	return max;
   }
