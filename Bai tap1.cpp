#include <stdio.h>

int main ()
{
	int n,a,S;
	
	printf("tinh tong 1+2+3+...+n");
	
	do
	{
		printf("\tnhap n: ");
		scanf("%d",&n);
	
		if (n<0) printf("nhap n>1. Nhap lai\t");
		
	} while(n<0);
	 a=1;
	 S=0;
	 	while (a<=n)
	 	{
			printf("\nS(%d)=%d",a,S+=a);
			a++;		
		}
	 printf("\n=>S(n)=%d\n",S);
	 
	return 0;
}
