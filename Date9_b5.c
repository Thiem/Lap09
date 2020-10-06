#include<stdio.h>
#include<stdlib.h>
int heron(int a,int b, int c);
int main()
{
	int a,b,c;
	printf("\nNhap 3 canh cua tam giac:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a)
	{
		printf("\nDien tich hinh tam giac theo cong thuc heron cua 3 canh vua nhap la: %d ",heron(a,b,c));
	}
	else
	{
		printf("\nBa canh vua nhap khong thoa man dk canh tam giac!");
	}
}
int heron(int a,int b, int c)
{
	int p,s;
	p = (a+b+c)/2;
	s = p*(p-a)*(p-b)*(p-c);
	return (sqrt(s));
}
