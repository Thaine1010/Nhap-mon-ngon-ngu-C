#include <stdio.h>
int main(){
int n,i,m;
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
	printf("Nhap so can kiem tra: ");
  scanf("%d",&m);
	for (i=0; i<n; i++){
  }
	for (i=0; i<n; i++){
	if(m>=a[i]){
		printf("Co ton tai");
    break;
	}}
  for (i=0; i<n; i++){
	if(m==!a[i]){
		printf("Khong ton tai");
    break;
	}
  }
  return 0;
  }
