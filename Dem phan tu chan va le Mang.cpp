c.1 tinh chan
#include<stdio.h>
#include<conio.h>
int main ()
{
	int i,n,a[100],dem=0;
	printf("nhap gia tri n: ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("nhap cac phan tu mang\n");
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++)
	if(a[i]%2==0)	dem++;
	
	printf("\nso phan tu chan la: %d",dem);
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf("\nphan tu chan la %d",a[i]);
		}
	}
	
	return 0;
}

c.2 tinh le
#include <stdio.h>
#include <conio.h>
int main()
{
	int n,i,a[100],dem=0;
	printf("nhap gia tri n: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("nhap gia tri phan tu mang: ");
		scanf("%d",&a[i]);	
	}
	
	for(i=0;i<n;i++)
	if(a[i]%2!=0)	dem++;
	
	printf("\nso phan tu le la: %d",dem);
	for (i=0;i<n;i++)
	{
		if(a[i]%2!=0)	
		{
			printf("phan tu chan la %d",a[i]);
		}
	}
	
	return 0;
}
