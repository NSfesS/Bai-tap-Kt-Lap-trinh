#include <stdio.h>
#include <math.h>
int main ()
{	
	int i,n,T;
	float x,S;
	printf("Tinh S=x+x^3+x^5+...+x^2n+1");
	do
	{
		printf("\nnhap gia tri x: ");
		scanf("%f",&x);
		
		printf("\nnhap gia tri n: ");
		scanf("%d",&n);	
		if(n<=0)	printf("\nnhap lai, nhap lai\n!");
	
	}while(n<=0);
	 i=1;
	 S=0;
	while(i<=n)
	{
		S+=pow(double(x),double(2*n+1));
		i++;
		printf("\n\tS=%.2f",S);
		
	}

	return 0;	
}
