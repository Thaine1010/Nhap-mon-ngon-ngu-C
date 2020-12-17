
#include <stdio.h>

int main(){
	int dongia,soluong;
	int thanhtien;
	printf("Nhap dongia =");
	scanf("%d",&dongia);
	printf("Nhap soluong =");
	scanf("%d",&soluong);
	thanhtien=soluong*dongia;
	if(soluong>=5&&dongia>=500){
	thanhtien=(soluong*dongia)*0.5;
	printf("%d",thanhtien);
	}else {printf("%d",thanhtien);
	}	
  getchar();
  return 0;
}
