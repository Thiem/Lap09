#include<stdio.h>
#include<stdlib.h>
void testCharacter(char str[30], char ch);
int main()
{
	char str[30],ch;
	printf("Please enter string:");
	gets(str);	
	printf("\nPlease enter one character:");
	fflush(stdin);
	scanf("%c",&ch);
	testCharacter(str,ch);
}
void testCharacter(char str[30], char ch)
{
	int x = ch;	
	int i,dem;
	dem =0;
	for(i=0;i<=strlen(str)-1;i++)
	{
		if(str[i] == x)
		{
			dem = i;
			break;
		}
	}
	if(dem == 0)
	{
		printf("\nKhong co ki tu %c trong chuoi!",ch);	
	}
	else
	{
		printf("\nCo %d ki tu sau ki tu %c trong chuoi!",(strlen(str)-dem-1),ch);
	}
}
