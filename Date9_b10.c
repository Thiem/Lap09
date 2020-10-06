#include<stdio.h>
#include<stdlib.h>
int main()
{
	char str[30];
	int j,count,a,o,u,i,e;
	float rate;
	a = 0;
	o = 0;
	e = 0;
	i = 0;
	u = 0;
	count =0;
	printf("Please enter string:");
	gets(str);
	for(j=0;j<=strlen(str);j++)
	{
		if(str[j]>=97&&str[j]<=122)
		{
			if(str[j] == 97 || str[j] == 101 || str[j] == 105 || str[j] == 111 || str[j] == 117)
			{
				if(str[j] == 97)
				{
					a += 1;
				}
				if(str[j] == 101)
				{
					e = e + 1 ;
				}
				if(str[j] == 105)
				{
					i = i + 1;
				}
				if(str[j] == 111)
				{
					o += 1;
				}
				if(str[j] == 117)
				{
					u += 1;
				}
			}
			else
			{
				count += 1;
			}
		}
	}
	float sum;
	sum = a+u+i+o+e+count;
	if(a == 0 && e == 0 && i == 0 && o == 0 && u ==0)
	{
		printf("\nString are not vowel and have %d characters!",count);
	}
	else
	{
		if(a!=0)
		{
			printf("\nVowel 'a' have %d characters and percentage of charaters %0.1f ",a,(a/sum)*100);
		}
		if(e!=0)
		{
			printf("\nVowel 'e' have %d characters and percentage of characters %0.1f",e,(e/sum)*100);
		}
		if(i!=0)
		{
			printf("\nVowel 'i' have %d characters and percentage of characters %0.1f",i,(i/sum)*100);
		}
		if(o!=0)
		{
			printf("\nVowel 'o' have %d characters and percentage of characters %0.1f",o,(o/sum)*100);
		}
		if(u!=0)
		{
			printf("\nVowel 'u' have %d characters and percentage of characters %0.1f",u,(u/sum)*100);
		}	
		if(count !=0)
		{
			printf("\nConsonant is %d charactes and percentage of characters %0.1f",count,(count/sum)*100);
		}
	}
}
