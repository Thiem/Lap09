#include<stdio.h>
#include<stdlib.h>
void revese();
int main()
{
	revese();
	return 0;
}
void revese()
{
	float arr[5];
	int i;
	printf("Please enter five number float:");
	for(i=0;i<5;i++)
	{
		printf("\nPlease enter number %d: ",i+1);
		scanf("%f",&arr[i]);
	}
	for(i=4;i>=0;i--)
	{
		printf("\nNumber %d: %0.1f",i+1,arr[i]);
	}
}

