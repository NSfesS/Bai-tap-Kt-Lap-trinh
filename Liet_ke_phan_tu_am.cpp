#include<stdio.h>
void nhapmang(int a[], int n)
{

	for(int i=0;i<n;i++)
	{
		printf("Nhap mang a[%d]: ",i);
		scanf("%d",&a[i]);
	}
}
void xuatmang(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
void vitriam(int a[],int n)
{
	for (int i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			printf("\ngia tri am cua phan tu trong mang la a[%d]: %d\n",i,a[i]);
		}
	}
}
int main()
{
	int n,i;
	int a[100];
	printf("nhap gia tri n:");
	scanf("%d",&n);
	if(n<1)
	{
		printf("nhap lai gia tri n:");
		scanf("%d",&n);	
	}
	nhapmang(a,n);
	xuatmang(a,n);
	vitriam(a,n);
	
	return 0;
}
