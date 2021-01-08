  
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
