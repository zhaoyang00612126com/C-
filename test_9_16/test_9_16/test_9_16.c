//1、画菱形
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int line=0;
	int i=0;
	int j=0;
	scanf("%d",&line);
	for(i=0;i<line;i++)
	{
		//打印空格
		for(j=0;j<line-1-i;j++)
		{
			printf(" ");
		}
		//打印*
		for(j=0;j<2*i+1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//打印下半部分
	for(i=0;i<line-1;i++)
	{
		
		for(j=0;j<=i;j++)
		{
			printf(" ");
		}
	
		for(j=0;j<2*(line-1-i)-1;j++)
		{
			printf("*");
		
		
		}
		printf("\n");
	}

	return 0;

}