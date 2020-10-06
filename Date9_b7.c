#include<stdio.h>
#include<stdlib.h>
int test_Total();
int main()
{
	printf("\nTotal of number to 300 from 500 mod 7 is: %d",test_Total());
}
int test_Total()
{
	int i;
	int sum = 0;
	for(i=300;i<=500;i++)
	{
		if(i%7==0)
		{
			sum += i;
		}
	}
	return (sum);
}
