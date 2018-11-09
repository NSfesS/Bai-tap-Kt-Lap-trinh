//Dung ham con truoc
#include <stdio.h>
int giaithua(int i);
void tinhtong(int n)
{
	int i=1;
	float S=0;
	
	while(i<=n)
	{
		S+=float(i)/giaithua(i);
		i++;
		
	}
	printf("tong la S= %.2f",S);
}
int giaithua(int i)
{
	int gt=1,j=1;
	while(j<=i)
	{
		
		gt*=j;
		j++;
	}	
	return gt;
}
int main ()
{
	int n;
	printf("tinh tong S=1+2/2!+...+n/n!");
	printf("nhap gia tri n: ");
	scanf("%d",&n);
	tinhtong(n);
	return 0;
}
