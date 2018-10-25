#include <stdio.h>
int main ()

{
	printf("Nhap S(n)=1+1.2+1.2.3+...+N");
	int i,n,P,S;
	do 
	{
		printf("\nNhap n: ");
		scanf("%d",&n);
		if (n<=0)	printf("\nnhap lai n nhe!\n");
		
	}while(n<=0);
	 i=1;
	 P=1;
	 S=0;
	 
	  while(i<=n)
	  {
			P=P*i;
			S=S+P;
			printf("\nS(%d)=%d",i,S);
			i++;
				
	  }
	  printf("\n=>S(n)=%d",S);

	return 0; 
}
