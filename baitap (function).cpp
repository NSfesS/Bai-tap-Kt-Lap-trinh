#include <stdio.h>
int tong (int a,int b);
void nhap(int*p);
int main ()
{
	int a,b;
	nhap (&a);
	nhap (&b);
	printf("[kq] S=%d",tong (a,b));
	return 0;
}
 void nhap(int*p)
   {
		printf("nhap gia tri ");
		scanf("%d",&*p);	
   }
	 int  tong(int a ,int b)
	 {
			int S= a+b;
			return S;
			
	 }
