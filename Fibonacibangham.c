#include<stdio.h>
#include<stdlib.h>
void generateFibo();
int main()
{
	generateFibo();
	return 0;
}
void generateFibo()
{
	int a,b,c,i,terms;
	printf("Enter number of terms: ");
	scanf("%d",&terms);
	a=0;
	b=1;
	c=0;
	printf("Fibonaci terms: \n");
	for(i=1;i<=terms;i++)
	{
		printf("%d,",c);
		a=b;
		b=c;
		c=a+b;
	}
}
