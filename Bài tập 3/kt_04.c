Binh Thuong
#include <stdio.h>
	int main(){
int n,i,sum=0;
printf("Nhap n =");
scanf("%d",&n);
if (n>0){
  i=n%10;
  sum+=i;
  n/=10;
  i=n%10;
  sum+=i;
  n/=10;
  i=n%10;
  sum+=i;
  n/=10;
  printf("%d",sum);
}

return 0 ;
}


FOR
#include <stdio.h>
int main(){
int n,i,sum=0;
printf("Nhap n: "); 
scanf("%d",&n);
for(;n!=0;n/=10){
i=n%10;
sum+=i;   
}
printf("%d",sum);
return 0;
}



WHILE
#include <stdio.h>
int main(){
int n,i,sum=0;
printf("Nhap n: "); 
scanf("%d",&n);
while(n!=0){
  sum=sum+n%10;
  n=n/10;

}
printf("%d",sum);
return 0;
}
