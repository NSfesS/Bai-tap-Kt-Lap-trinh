#include <stdio.h>

int main ()
{
	int n,i;
	float S;
	
	printf("tinh tong 1/2+1/4+...+1/2n");
	do
	{
		printf("\tNhap n: ");
		scanf("%d",&n);
		if (n<=0)	printf("\nNhap lai nhe");
			
	}while(n<=0);
	i=1;
	S=0;
	 while(i<=n)
	 {
			printf("\n(%d)=%.3f",i,S+=1.0/(2*i));
			i++;		
	 }
	 printf("\n=>S(n)=%.3f",S);
	
	return 0;
}
