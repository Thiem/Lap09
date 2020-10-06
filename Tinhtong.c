#include<stdio.h>
#include<stdlib.h>
int main()
{	
	int a,b;
	printf("Please enter number 1: ");
	scanf("%d",&a);
	printf("\Please enter number 2: ");
	scanf("%d",&b);
	printf("Total is: %d",total(a,b));
}
total(int i,int j)
{
	int sum;
	sum = i + j;
	return (sum);
}
