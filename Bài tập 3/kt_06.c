  
#include <stdio.h>

int main(){
	int n, i, c, cout;

	printf("\nNhap n: ");
  scanf("%d", &n);

	for (i=0; i<n; i++){
 		for (cout=n-1; cout>i; cout--){
			printf("   ");
		}
		for (c=0; c<i*2+1; c++){
 			printf(" * ");
 		}
	printf("\n");
  	}
  return 0;
}



  
#include <stdio.h>

int main(){
	int n;
  printf("Nhap n=");
  scanf("%d",&n);
  if(n==1){
  printf("*");
  }else if(n==2){
  printf("  *\n");
  printf("* * *\n");
  }
  else if(n==3){
  printf("    *\n");
  printf("  * * *\n");
  printf("* * * * *\n");
  }
  else if(n==4){
  printf("      *\n");
  printf("    * * *\n");
  printf("  * * * * *\n");
  printf("* * * * * * *\n");
  }

return 0;
}
include <stdio.h>

int main(){
//h =1
// 1 hang, 1*, 0 khoang trong
// h = 2 
// 2 hang:
// - hang 1: 1*, 2 trang
// - hang 2: 3*, 1 trang
// - hang 2: 5*, 0 trang
int h = 3;
printf("  *\n");// hang 1 
printf(" ***\n");// hang 2
printf("*****\n");// hang 3
return 0;
}

int test()
// hang 1 
printf("  ");// in ra 2  (h - 1) hang
printf("*");// in ra 1 (2*1-1) *
printf("\n");// ket thuc hang 1
// hang 2
printf(" ");// in ra 1 hang (h - 1)hang
printf("***");// in ra 3 (2*2-1) *
printf("\n");// ket thuc hang 2
// hang 2
printf("");// in ra 0 hang (h - 3)hang
printf("*****");// in ra 5 (2*3-1) *
printf("\n");// ket thuc hang 3
int h = 3;
for(int i = 1; i <= 3; i++){
  printf("hang %d", i );
  // in ra h - 1 khoảng trắng
  // in ra 2*i - 1 ngoi *
  printf("\n");
}
return 0;
}
