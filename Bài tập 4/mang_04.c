#include <stdio.h>

int main(){
	int n,i,sum=0;;
	printf("Nhap n= ");
  scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++){
		printf("Nhap phan tu thu %d: ",i+1);
    scanf("%d",&a[i]);
	}
	printf("\nMang a[");
	for (i=0;i<n;i++){
		printf("%d ",a[i]);
	}
  printf("\n");
	for (i=0;i<n;i++){
		sum+=a[i];
	}
	printf("Tong cac phan tu trong mang: sum=%d",sum);

return 0;
}
