//xep thu tu tang dan
#include<stdio.h>
int main()
{
	int i,n,a[100];
	printf("nhap gia tri n: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("nhap gia tri cua mang a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	int temp;
	for(i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
	//printf("\n%d");
	return 0;
}


//xep thu tu giam dan
#include<stdio.h>
int main()
{
	int i,n,a[100];
	printf("nhap gia tri n: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("nhap gia tri cua mang a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	int temp;
	for(i=0;i<n-1;i++)
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
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
	//printf("\n%d");
	return 0;
}
