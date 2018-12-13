/*#include<stdio.h>
bool songuyento(int n)
{
	if(n <= 1) return false;// neu nhap 1 OSNT
	for(int i=2;i<n;i++)
	{
		if (n%i==0)
		{
			return false; // co uoc so bat ky < n OSNT
			break; // cat dut quan he
		}
		
	}
	return true;// neu n % i != 0 thi thoat vong lap for
}
int main()
{
	int n;
	printf(" nhap gia tri so nguyen n: ");
	scanf("%d",&n);
	if(songuyento(n) == true) printf("So %d la so nguyen to",n);
	else printf("So %d khong phai la so nguyen to",n);
	return 0;
}*/





#include<stdio.h>
void songuyento(int n)
{
	int flag = 1;
	if(n <= 1) printf ("khong phai so nguyen to");
	else
	{
		for(int i=2;i<n;i++)
		{
			if (n%i==0)
			{
				flag =0;
			}
		}
	}
	if (flag == 1) printf("%d la so nguyen to",n);
	else  printf("%d khong la so nguyen to",n);
}
int main()
{
	int n;
	printf(" nhap gia tri so nguyen n: ");
	scanf("%d",&n);
	songuyento(n);
	return 0;
}
