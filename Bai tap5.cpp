#include <stdio.h>

int main()
{
	int i,n;
	float S;
	
	printf("tinh tong 1+1/3+1/5+...+1/(2n+1)");
	
	do
	{
		printf("\nnhap n: ");
		scanf("%d",&n);
		if(n<0) printf("\nnhap lai n nhe\n");
	
	}while(n<0);
	i=0;
	S=0;	
	while (i<=n)
	{
		printf("\nS(%d)=%.2f",i,S+=float(1)/((2*i)+1));
		i++;
	}

	printf("\n=>Sn=%.2f",S);
	
	return 0;	
}
