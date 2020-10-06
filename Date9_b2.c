#include<stdio.h>
#include<stdlib.h>
void min();
int main()
{
	min();
	return 0;
}
void min()
{
	int arr[10];
	int i,min,index;
	printf("Please enter ten number interger:");
	for(i=0;i<10;i++)
	{
		printf("\nPlease enter number %d: ",i);
		scanf("%d",&arr[i]);
	}
	min = arr[0];
	index = 0;
	for(i=1;i<10;i++)
	{
		if(min>arr[i])
		{
			min = arr[i];
			index = i;
		}
	}
	printf("\nIndex of number min is: %d",index);
}

