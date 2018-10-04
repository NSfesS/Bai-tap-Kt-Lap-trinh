#include <stdio.h>

int main ()
{
	int n,i;
	float S;
	
	printf("tinh tong S= 1+ 1/2 +1/3+...+1/n");
	do
	{
		printf("\tNhap n: ");
		scanf("%d",&n);
		if (n<=0) printf("\nNhap lai nhe");
		
	}while (n<=0);
	
	i=1;
	S=0;
	while (i<=n)
		{
			printf("\nS(%d)=%.2f",i,S+=1.0/i);
			i++;
		}
		printf("\n=>S(n)=%.2f",S);
	
	return 0;
}
