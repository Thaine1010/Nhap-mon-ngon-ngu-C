#include <stdio.h>

int main(){
	int n,i;
	printf("Nhap phan tu: ");
  scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++){
		printf("Nhap phan tu vo mang %d: ",i);
    scanf("%d",&a[i]);
	}
	printf("Mang [");
	for (i=0;i<n;i++){
		printf(" %d ",a[i]);
	}
	printf("\n");
	printf("Cac so le trong mang: ");
	for (i=0;i<n;i++){
		if(a[i]%2==0){
			printf("%d",a[i]);
		}
	}
	return 0;
}
