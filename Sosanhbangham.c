#include<stdio.h>
#include<stdlib.h>
int max(int num1,int num2);
int main()
{
	int num1,num2,maximum;
	printf("Enter two number:");
	scanf("%d %d",&num1,&num2);
	maximum = max(num1,num2);
	printf("\Maximum is: %d",maximum);
	return 0;
}
int max(int num1,int num2)
{
	int maximum;
	if(num1<num2)
	{
		maximum = num2;
	}
	else
	{
		maximum = num1;
	}
	return maximum;
}
