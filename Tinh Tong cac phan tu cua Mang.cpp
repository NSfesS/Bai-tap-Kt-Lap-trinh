#include <stdio.h>
int main()
{
	int n, a[n],i,S=0;
	printf("tinh tong cac phan tu trong mang ");
	printf("nhap gia tri n: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("nhap gia tri cho mang a[i]:_");
		scanf("%d",&a[i]);
		
		S+=a[i];
	}
	
	printf("tong gia tri trong mang la %d",S);
	return 0;
}
