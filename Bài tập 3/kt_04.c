#include <stdio.h>

int main(){
    int n, i, cout_c=0, cout_l=0;
    
    printf("Chuong trinh tinh tong chan va le tu 1 den n\n");
    printf("Nhap n: "); 
    scanf("%d",&n);
	
    for (i=1;i<=n;i++){
      //so chan
    	if (i%2==0){ 
    		cout_c+=i;
		}
    //so le
		else{ 
			cout_l+=i;
		}
	}
    printf("Tong cac so chan = %d\n",cout_c);
    printf("Tong cac so le = %d",cout_l);
    return 0;
}
