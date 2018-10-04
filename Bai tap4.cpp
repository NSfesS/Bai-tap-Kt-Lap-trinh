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
			S=float(1)/2*i;
			printf("\n(%d)=%.3f",i,S);
			i++;		
	 }
	 printf("\n=>S(n)=%.3f",S);
	
	return 0;
}

/* Cach 2
include <stdio.h>

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
			S=float(1)/2*i;
			printf("\n(%d)=%.3f",i,S);
			i++;		
	 }
	 printf("\n=>S(n)=%.3f",S);
	
	return 0;
}*/


/* cach 3
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
			S=float(1)/2*i;
			printf("\n(%d)=%.3f",i,S);
			i++;		
	 }
	 printf("\n=>S(n)=%.3f",S);
	
	return 0;
}*/
