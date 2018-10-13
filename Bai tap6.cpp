#include <stdio.h>

int main()
{
	int i,n;
	float S;
	printf("tinh tong 1/1*2+1/2*3+...+1/n(n+1)");
	
	do
	{
		printf("\nnhap n: ");
		scanf("%d",&n);
		if (n<=0)	printf("\tnhap lai n nhe!");
	}while(n<=0);
	 i=1;
	 S=0;
	while(i<=n)
	{
		printf("\n\tS(%d)=%.2f",i,S+=float(1)/(i*(i+1)));
		i++;	
	}
	printf("\n\t=>S(n)=%.2f",S);
	
	return 0;	
}
