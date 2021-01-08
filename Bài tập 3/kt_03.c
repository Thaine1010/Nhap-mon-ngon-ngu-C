cach 1
#include <stdio.h>

int main(){
	int i;
	
	printf("Cac so le tu 1 den 20:\n ");
	
	for (i=1; i<=20; i++){
    //xem nhung so khong chia het cho 2
		if (i%2 != 0){ 
			switch (i){
				case 5:
					break;
				case 11:
					break;
				case 15: 
					break;
				default: 
					printf("%d\t",i);
			}
		}
  }
	return 0;
	} 
cach 2
#include <stdio.h>

int main(){
	int i;
	
	printf("Cac so le tu 1 den 20:\n ");
	
	for (i=1; i<=20; i++){
    if((i==5)||(i==11)||(i==15)){
     continue;
    }
    printf("%d\t",i);
  
  } 
return 0;
}

while
#include <stdio.h>

int main(){
	int i=0;
	
	printf("Cac so le tu 1 den 20:\n ");
	
	 while(i<20){
    //xem nhung so khong chia het cho 2
		if (i%2 != 0){ 
			switch (i){
				case 5:
					break;
				case 11:
					break;
				case 15: 
					break;
				default: 
					printf("%d\t",i);
			}
		}
		i++;
  }
	return 0;
}

