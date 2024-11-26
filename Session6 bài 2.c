#include<stdio.h>
int main(){
	int a,b,c = 0,d = 0;
	
	printf("Nhap 5 so nguyen:\n ");
	for( a=0; a<5; a++){
		printf("Nhap so thu nhat %d: ", a+1);
		scanf("%d",&b);
		
		if (b % 2 ==0)
			c++;
		else
			d++;
			
	}
	
	printf("Ket qua :\n");
	printf("So luong so chan: %d\n",c);
	printf("So luong so le: %d\n",d);
	

	return 0;
}
