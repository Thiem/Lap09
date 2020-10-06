#include<stdio.h>
#include<stdlib.h>
int chuvi(int x, int y);
int main()
{
	int a,b;
	printf("Please enter a & b:");
	scanf("%d %d",&a,&b);
	printf("\nChu vi HCN is: %d",chuvi(a,b));
	printf("\nDien tich HCN is: %d",dientich(a,b));
}
int chuvi(int x, int y)
{
	int c;
	c = (x+y)*2;
	return (c);	
}
int dientich(int x, int y)
{
	int s;
	s = x*y;
	return (s);
}
