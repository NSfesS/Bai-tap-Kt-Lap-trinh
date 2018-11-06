#include <stdio.h>
//#include <math.h>
int main ()
{
	int i,n,T;
	float x,S;
	printf("Tinh Tong S=x+x^2/1+2+...+x^n/1+2+3+...+n");
	
	do
	{
		printf("\nnhap gia tri x: ");
		scanf("%f",&x);
		printf("\nnhap gia tri n: ");
		scanf("%d",&n);
		if (n<=0)	printf("nhap lai, nhap lai!");	
	
	}while(n<=0);
	 i=1;
	 T=0;
	 S=0;
	while(i<=n)
	{
		T+=i;
		S+=float(pow(double(x),double(i)))/T;
		i++;
		printf("\n\tS=%.2f",S);
	}

	return 0;	
}
