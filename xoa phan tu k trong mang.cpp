//xoa cac phan tu co chi so k trong mang
#include<stdio.h>

int main()
{
	int  n,a[100],i,k;
	printf("nhap gia tri n: ");
	scanf("%d",&n);
	
	for (i=0;i<n;i++)
	{
		printf("nhap gia tri mang a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	printf(" %d",a[i]);
	
	}
	printf("nhap gia tri k: ");
	scanf("%d",&k);
	int flag=0;
	for(i=0;i<n;i++)
	{
		if (k!=a[i]) flag=1;
	}
	if(1)	printf("khong co k trong mang");
		else 
		{
			
			for (i=0;i<n;i++)
			{
		
			if (a[i]!= k)	printf("%d",a[i]);
			}
		}
	return 0;
}
