#include <stdio.h>

int main(){
	int a=7,b=6;
	char pt;
	printf("Vui long nhap phinh tinh");
	scanf("%c",&pt);
	switch(pt) {
		case '+':
     printf("a + b = %d",a+b);
	  	break;
	

	  case '-':
     printf("a - b = %d",a-b);
      break;

defaut:
 printf("vui long nhap phep tinh");
    }

 getchar();
  return 0;
}
