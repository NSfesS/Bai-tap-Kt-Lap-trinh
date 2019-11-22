#include<stdio.h>
void nhapmanga(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("nhap gia tri mang a[%d]: ",i);
		scanf("%d",&a[i]);
	
	}
}
void xuatmanga(int a[],int n)
{
	printf("mang a:\n");
	for(int i=0;i<n;i++)
	{
		printf(" %d\t ",a[i]);
	}
}
void nhapmangb(int b[],int m)
{
	for(int j=0;j<m;j++)
	{
		printf("nhap gia tri mang b[%d]: ",j);
		scanf("%d",&b[j]);
	
	}
}
void xuatmangb(int b[],int m)
{
	printf("\nmang b:\n");
	for(int j=0;j<m;j++)
	{
		printf("%d\t",b[j]);
	
	}
}
void demsoluong(int a[],int b[],int n,int m)
{
	xuatmanga(a,n);
	xuatmangb(b,m);
	int dem=0;
	int c=n+m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i]==b[j])
			{
				dem++;
				break;
			}
		}
		
	}
	printf("\ndem:%d",c-dem);
}
int main()
{
	int a[100],b[100],n,m;
	printf("nhap gia tri n: ");
	scanf("%d",&n);
	if(n<1)
	{
		printf("nhap lai gia tri n!");
	}
	printf("nhap gia tri m: ");
	scanf("%d",&m);
	if(n<1)
	{
		printf("nhap lai gia tri m!");
	}
	nhapmanga(a,n);
	nhapmangb(b,m);
	demsoluong(a,b,n,m);
	return 0;
}
