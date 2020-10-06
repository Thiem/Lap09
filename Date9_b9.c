#include<stdio.h>
#include<stdlib.h>
void diemtrungbinh_xeploai(float a,float b,float c);
int main()
{
	float math,physical,chemistry;
	printf("Please enter math score of studen:");
	scanf("%f",&math);
	printf("Please enter physical score of studen:");
	scanf("%f",&physical);
	printf("Please enter chemistry score of studen:");
	scanf("%f",&chemistry);
	diemtrungbinh_xeploai(math,physical,chemistry);
}
void diemtrungbinh_xeploai(float a,float b,float c)
{
	float medium;
	medium =  (a+b+c)/3;
	if(medium>=5)
	{
		if(medium>=6.5)
		{
			if(medium>=8)
			{
				printf("\nSinh vien diem trung binh la %0.1f xep loai gioi!",medium);
			}
			else
			{
				printf("\nSinh vien diem trung binh la %0.1f xep loai kha!",medium);
			}
		}
		else
		{
			printf("\nSinh vien diem trung binh %0.1f xep loai trung binh!",medium);
		}		
	}
	else
	{
		printf("\nSinh vien diem trung binh %0.1f xep loai kem!",medium);
	}
}
