#include<stdio.h>
#include<stdlib.h>
void swap(int *num1,int *num2)
{
	int temp;
	printf("In function values before swapping: %d %d\n",*num1,*num2);
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
	printf("In function values after swapping: %d %d\n",*num1,*num2);
}
int main()
{
	int n1,n2;
	printf("Enter two number: ");
	scanf("%d %d",&n1,&n2);
	printf("In main values before swapping: %d %d\n",n1,n2);	
	swap(&n1,&n2);
	printf("In main values after swapping: %d %d",n1,n2);
	return 0;
}
