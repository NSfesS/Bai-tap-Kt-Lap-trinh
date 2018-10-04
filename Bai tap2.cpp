#include <stdio.h>

int main ()
{
	int n,i,S;
	
	printf("tinh tong S=1^2+2^2+...n^2");
	do
	{
		printf("\tnhap n: ");
		scanf("%d",&n);
	
		if (n==0) printf("nhap lai nhe");
	}while (n==0);
	 i=1;
	 S=0;
	 while (i<=n)
	 {
			printf("\nS(%d)=%d",i,S+=i*i);
			i++;
				
	 }
	printf("\n=>S(n)=%d",S);
	
	return 0;
}
