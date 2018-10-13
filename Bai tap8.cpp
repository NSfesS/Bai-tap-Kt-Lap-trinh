#include <stdio.h>

int main()
{
	int i,n;
	float S;
	printf("tinh tong 1/2+3/4+...+2n+1/2n+2");
	do
	{
		printf("\nNhap n: ");
		scanf("%d",&n);
		if (n<0)	printf("\n\tNhap lai n nhe!");
	}while(n<0);
	 i=0;
	 S=0;
	while(i<=n)
	{
		printf("\n\tS(%d)=%.2f",i,S+=float(2*i+1)/(2*i+2));
		i++;
	}
	printf("\n\t=>S(n)=%.2f",S);
	
	return 0;	
}
