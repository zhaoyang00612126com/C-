
//C语言递归实现n的k次方
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//
//int power(int n,int k)
//{
//	if(k<=0)
//		return 1;
//	else 
//		return  n*power(n, k-1);
//	
//	
//}
//
//int main()
//{
//	
//	int n= 0;
//	int k= 0;
//	int ret= 0;
//	scanf("%d%d",&n,&k);
//	ret= power(n,k);
//	printf("%d\n",ret);
//	return 0;
//
//}

//C语言实现大小写字符转换
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int ch=0;
//	
//	while((ch=getchar())!=EOF)
//	{
//		if(ch>='A'&&ch<='Z')
//		{
//			putchar(ch+32);
//		}
//		else if(ch>='a'&&ch<='z')
//		{
//			putchar(ch-32);
//		
//		}
//		else if (ch>='0'&&ch<='9')
//		{
//			
//			printf("haha");
//		}
//		else
//		{
//			putchar(ch);
//		}
//	
//	
//	
//	}
//	
//
//
//	return 0;
//
//}


//总共能喝多少瓶汽水
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	
//	int money=0;
//	int total=0;
//	int empty_glass=0;
//	scanf("%d",&money);
//	total=money;
//	empty_glass=money;
//	while(empty_glass>1)
//	{
//		total=total+empty_glass/2;
//		empty_glass=empty_glass/2+empty_glass%2;
//	}
//	printf("total=%d\n",total);
//	return 0;
//
//}


//法二
//
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	
//	int money=0;
//	int bottleNum=0;//喝了多少瓶
//	int emptyNum=0;//现有的空瓶数
//	scanf("%d",&money);
//	while(money!=0)
//	{
//		money=money-1;
//		bottleNum=bottleNum+1;
//		/*printf("喝了%d瓶\n",bottleNum);*/
//		emptyNum=emptyNum+1;
//		if(emptyNum==2)
//		{
//			bottleNum++;
//			/*printf("换了一瓶");*/
//			
//			emptyNum=1;
//		}
//		
//	
//	}
//	printf("喝了%d瓶\n",bottleNum);
//	return 0;
//
//}

//计算1-1/2+1/3-1/4+....+1/99-1/100的值
//法一
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i=1;//i表示分母
//	double sum=0.0;
//	double sum1=0.0;
//	double sum2=0.0;
//	while(i<=100)
//	{
//		if((i%2)==0)
//		{
//			sum1=sum1-1.0/i;
//		}
//		
//		if((i%2)!=0)
//		{
//			sum2=sum2+1.0/i;
//		}
//		sum=sum1+sum2;
//		i=i+1;
//	}
//	
//	printf("%lf\n",sum);
//	
//	return 0;
//
//}
//法二
//
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	
	int i=0;
	double sum=0.0;
	int flag=1;
	for(i=1;i<=100;i++)
	{
		sum=sum+flag*1.0/i;
		flag=-flag;//每循环一次flag变一次符号

	}

	printf("%lf\n",sum);
	
	return 0;

}

