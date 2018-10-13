#include <stdio.h>

int main()
{
	int i,n,T;
	printf ("Tinh tich 1*2*3*4*...*n");
	do
	{
		printf("\nNhap n: ");
		scanf("%d",&n);
		if (n<=0)	printf("\n\tnhap lai n nhe!");
	}while(n<=0);
	 i=1;
	 T=1;
	 //S=1;
	while (i<=n)
	{
		printf("\n\tT(%d)=%d",i,T*=i);
		i++;
	}	
	printf("\n\t=>T(n)=%d",T);
	
	return 0;	
}
