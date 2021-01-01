#include <stdio.h>

int main(){
	int a,b,n;
  
  //Nhap 2 so a,b
	printf("Nhap a: ");
  scanf("%d",&a);
	printf("Nhap b: ");
  scanf("%d",&b);
  
	for (n=a;n<=b;n++){
		switch (n){
			case 1: 
				printf("one\n");
				break;
			case 2: 
				printf("two\n");
				break;
			case 3: 
				printf("three\n");
				break;
			case 4: 
				printf("four\n");
				break;
			case 5: 
				printf("five\n");
				break;
			case 6: 
				printf("six\n");
				break;
			case 7: 
				printf("sevent\n");
				break;
			case 8: 
				printf("eight\n");
				break;
			case 9: 
				printf("nine\n");
				break;
			default: 
          //n la so chan
				if (n%2==0){ 
					printf("even\n");
				}
          //n la so le
				else{ 
					printf("odd\n");
				}
		}
	}

	
	return 0;
}
