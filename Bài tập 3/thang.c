#include <stdio.h>

int main(){
	int thang;
	char pt;
	printf("Vui long nhap thang");
	scanf("%d",&thang);
	switch(thang) {
         case 2:
     printf("28 ngay");
	  	break;
     case 1:
     case 3:
     case 9:
     case 5:
     case 7:
     case 11:
     printf("31 ngay");
    break;
     case 4:
     case 6:
     case 8:
     case 10:
     case 12:
     printf("30 ngay");
    break;

defaut:
 printf("vui long nhap thang");
  }
    

 getchar();
  return 0;
}
