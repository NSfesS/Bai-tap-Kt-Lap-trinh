//sap xep mang tang dan
#include<stdio.h>
int main ()
{
	int i,n,a[100];
	printf("nhap gia tri n: ");
	scanf("%d",&n);
	int temp;
	for (i=0;i<n;i++)
	{
		printf("xuat gia tri mang a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	
	for(i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp;
				a[i]=a[j];
				a[j]=temp;
				//printf("%d",temp);
			}
		}
	}
	//int max=0;
	for(i=0;i<n;i++)
	{
		//if(max<a[i]) max=a[i];
		printf("\t%d",a[i]);
	}
	return 0;
}
