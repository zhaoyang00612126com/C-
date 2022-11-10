//#include<stdio.h>
//int main()
//{
//
//	printf("     **\n");
//	printf("     **\n");
//	printf("*************\n");
//	printf("*************\n");
//	printf("    *  *     \n");
//	printf("    *  *     \n");
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//
//
//	printf("%#X",0XABCDEF);
//
//	return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//	int ret = printf("hello world!");
//	printf("\n");
//	printf("%d\n",ret);
//	return 0; 
//}


//
//#include<stdio.h>
//int main()
//{
//	int xuehao = 0;
//	double C = 0.0;
//	double SHUxue = 0.0;
//	double ENGLISH = 0.0;
//	scanf_s("%d;%lf,%lf,%lf",&xuehao,&xuehao,&C,&SHUxue,&ENGLISH);
//	printf("The each subject score of NO. %d is %.2lf , %.2lf , %.2lf. " ,xuehao, C, SHUxue, ENGLISH);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int number = 0;
//	float score_c = 0.0;
//	float score_math = 0.0;
//	float score_eng = 0.0;
//	scanf_s("%d;%f,%f,%f", &number, &score_c, &score_math, &score_eng);
//	printf("The each subject score of No. %d is %.2f, %.2f, %.2f.\n", 
//		number, score_c, score_math, score_eng);
//	return 0;
//}

#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
//		{
//			printf("YES\n");
//			
//		
//		}
//		else
//		{
//			printf("NO\n");
//			
//
//		}
//		getchar();//吃到空格
//	
//	}
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		//使用库函数
//		if (isalpha(ch))
//			printf("YES\n");
//		else
//			printf("NO\n");
//		getchar();
//	}
//	return 0;
//}

//int main()
//{
//	//输入一个字符
//	char ch = 0;
//	ch = getchar();
//	//输出金字塔
//	int i = 0;
//	//每循环一次，打印一行
//	//每一行有两部有份组成，空格和字符
//	for (i = 0;i < 5;i++)
//	{
//		int j = 0;//打印空格
//		for (j=0;j<4-i;j++)
//		{
//			printf(" ");
//		
//		}
//		for (j=0;j<=i;j++)
//		{
//			printf("%c ",ch);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	char arr[]={73,32,99,97,110,32,100,111,32,105,116,32};//数组是用下标来访问的
//
//	int i = 0;
//	//计算数组的大小
//	int sz = sizeof(arr) / sizeof(arr[0]);//总大小除以第一个元素的大小
//	for (i=0;i<sz;i++)
//	{
//		printf("%c",arr[i]);
//	}
//	return 0;
//}
 

//
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int data = 0;
//	//按照格式输入
//	scanf_s("%4d%2d%2d",&year,&month,&data);
//	//输出
//	printf("year=%4d\n",year);
//	printf("month=%02d\n",month);
//	printf("data=%02d\n", data);
//
//
//	return 0;
//}



//
//int main()
//{
//	int n = 0;
//	//针对整形的多组输入
//	while (scanf_s("%d", &n) != EOF)//scanf也有返回值
//	{
//		
//		printf("%d\n",1<<n);
//	
//	}
//	return 0;
//
//
//
//}



//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf_s("a=%d,b=%d",&a,&b);
//	c = a;
//	a = b;
//	b = c;
//	printf("a=%d,b=%d\n",a,b);
//
//
//	return 0;
//
//}
//



