//giam dan cua mang voi ham con
#include<stdio.h>

void nhapmang(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("nhap gia tri mang vao a[%d]",i);
		scanf("%d",&a[i]);
	}
}
int sapxep(int a[], int n)
{
	int temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;	
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		printf(" %d",a[i]);
	}
}
int main()
{
	int n,a[100];
	printf("nhap gia tri n: ");
	scanf("%d",&n);
	nhapmang(a,n);
	sapxep(a,n);
	
	return 0;
}
