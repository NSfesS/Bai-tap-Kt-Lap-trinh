#include <stdio.h>
//#include <stdlib.h>
int main()
{
	int i,n;
	float S;
	//int flag=1;
	printf("tinh tong 1/2+2/3+...+n/n+1");
	
	do
	{
			printf("\nnhap n: ");
			scanf("%d",&n);
			if (n<=0)	printf("\n\tnhap lai n nhe!");
	}while(n<=0);
	 i=0;
	 S=0;
	while(i<=n)
	{
		printf("\n\tS(%d)=%.2f",i,S+=float(i)/(i+1));
		i++;		
	}
	printf("\n\t=>S(n)=%.2f",S);
	
	return 0;	
}
