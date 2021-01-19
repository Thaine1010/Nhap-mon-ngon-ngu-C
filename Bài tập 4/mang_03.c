#include <stdio.h>

int main(){
	int n,i;
	printf("Nhap n ");
  scanf("%d",&n);
	int a[n];
	for (i=0;i<=n;i++){
		printf("Nhap phan tu thu vo mang %d: ",i);
    scanf("%d",&a[i]);
	}
	printf("Mang a[");
	for (i=n;i<=n;i++){
		printf(" %d ",a[i]);
	}
	printf("\n");
  printf("Mang co  so 0 \n");
	
	for(i=0;i<n;i++){
		if (a[i]%2 != 0){
			printf("%d  ",a[i]);
		}
	}
	
	printf("\nCac so chan: ");
	for(i=0;i<n;i++){
		if (a[i]%2 == 0 && a[i]!=0){
			printf("%d  ",a[i]);
		}
  }
	return 0;
  }
