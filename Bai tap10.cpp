#include <stdio.h>
#include <math.h>
int main ()

{
	int x,n,T;
		
	printf("\tT(n)=x^n");
	
	 printf("\nNhap gia tri x: ");
	 scanf("%d",&x);
	
	 printf("Nhap gia tri so mu n: ");
	 scanf("%d",&n);
	
	 T=pow(x,n);
	
	printf("\t=>T(n)=%d",T);
	return 0; 
}

*Cách 2:
#include <stdio.h>
#include <math.h>
int main ()

{
	float x,n,T;
		
	printf("\tT(n)=x^n");
	
	 printf("\nNhap gia tri x: ");
	 scanf("%f",&x);
	
	 printf("Nhap gia tri so mu n: ");
	 scanf("%f",&n);
	
	 T=pow(x,n);
	
	printf("\t=>T(n)=%.2f",T);
	return 0; 
}

*Cách 3:
#include <stdio.h>
#include <math.h>
int main ()

{
	int x,n,T;
		
	printf("\tT(n)=x^n");
	
	 printf("\nNhap gia tri x: ");
	 scanf("%d",&x);
	
	 printf("Nhap gia tri so mu n: ");
	 scanf("%d",&n);
	
	 T=pow(x,n);
	
	printf("\t=>%d^%d=%d",x,n,T);
	return 0; 
}
