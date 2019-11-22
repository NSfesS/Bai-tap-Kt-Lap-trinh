#include<stdio.h>
void nhapmang(int a[], int n)
{
	printf("nhap gia tri n:");
	scanf("%d",&n);
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
	for (int i;i<n;i++)
	{
		if(a[i]<0)
		{
			printf("gia tri am cua phan tu trong mang la a[%d]: %d",i,a[i]);
		}
	}
}
int main()
{
	int n,i;
	int a[100];
	nhapmang(a,n);
	xuatmang(a,n);
	vitriam(a,n);
	
	return 0;
}
