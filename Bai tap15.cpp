#include <stdio.h>
//#include <math.h>
int main ()
{
	int i,n,T;
	float S;
	printf("Tinh Tong S=1+1/1+2+...+1/1+2+3+...+n");
	
	do
	{
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
		S+=float(1)/T;
		i++;
		printf("S=%.2f",S);
	}

	return 0;	
}
