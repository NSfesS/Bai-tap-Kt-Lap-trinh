#include <stdio.h>
#include <math.h>
int main ()
{	
	int i=1,n,T;
	float x,S=0;
	printf("S=x + x^2+...+x^n");
	do
	{
		printf("\nnhap gia tri x: ");
		scanf("%f",&x);
	
		printf("\nnhap gia tri n: ");
		scanf("%d",&n);
		if (n<0)	printf("\nnhap lai n!\n");
		
	}while(n<0);
	while(i<=n)
	{
		S+=pow(double(x),double(i));
		i++;
		
		printf("\n\t=>Tong la S(n)=%.2f",S);
	}
		//printf("\n\t=>Tong la S(n)=%f",S);
	
	return 0;
	
}
