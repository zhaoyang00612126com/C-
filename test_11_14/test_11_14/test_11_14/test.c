//#include <stdio.h>
////精度尽量保持高
////这个题使用float精度不满足要求
//int main()
//{
//    double n1 = 0.0;
//    double n2 = 0.0;
//    char op = 0;
//    while (scanf_s("%lf%c%lf", &n1, &op, &n2) != EOF)
//    {
//        switch (op)
//        {
//        case '+':
//            printf("%.4lf+%.4lf=%.4lf", n1, n2, n1 + n2);
//            break;
//        case '-':
//            printf("%.4lf-%.4lf=%.4lf", n1, n2, n1 - n2);
//            break;
//        case '*':
//            printf("%.4lf*%.4lf=%.4lf", n1, n2, n1 * n2);
//            break;
//        case '/':
//            if (n2 == 0.0)
//                printf("Wrong!Division by zero!\n");
//            else
//                printf("%.4lf/%.4lf=%.4lf", n1, n2, n1 / n2);
//            break;
//        default:
//            printf("Invalid operation!\n");
//            break;
//        }
//    }
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf_s("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf_s("%d", &n) != EOF)
//	{
//		int i = 0;
//		//确定行数
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			//每一行的打印，打印n组*+空格
//			for (j = 0; j < n; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf_s("%d", &n) != EOF)
//	{
//		int i = 0;
//		//控制行数
//		for (i = 1; i <= n; i++)
//		{
//			//每一行
//			int j = 0;
//			for (j = 1; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf_s("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = n; i >= 1; i--)
//		{
//			int j = 0;
//			for (j = i; j >= 1; j--)
//			{
//				//这里注意空格
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


////代码1-常规写法
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf_s("%d", &n) != EOF)
//	{
//		int i = 0;
//		//行数控制
//		for (i = 0; i < n; i++)
//		{
//			//空格
//			int j = 0;
//			for (j = 0; j < n - 1 - i; j++)
//			{
//				printf(" ");
//			}
//			//*
//			for (j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//
//	}
//	return 0;
//}









////代码2
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf_s("%d", &n) != EOF)
//	{
//		int i = 0;
//		int j = 0;
//		//行数
//		for (i = 0; i < n; i++)
//		{
//			//一行
//			for (j = 0; j < n; j++)
//			{
//				//行和列的和
//				//这里可以把行数和列数标出来就能看明白
//				if (i + j < n - 1)
//				{
//					printf(" ");
//				}
//				else
//				{
//					printf("* ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}











//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf_s("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			//一行
//			int j = 0;
//			//空格
//			for (j = 0; j < n - 1 - i; j++)
//			{
//				printf(" ");
//			}
//			//*
//			for (j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf_s("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			//一行
//			int j = 0;
//			for (j = 0; j < i; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j < n - i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	double score = 0.0;
//	double sum = 0.0;
//	for (i = 0; i < 5; i++)
//	{
//		scanf_s("%lf", &score);
//		sum += score;
//	}
//	printf("%.2lf\n", sum / 5);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int s = 0;
//	while (scanf_s("%d", &s) != EOF)
//	{
//		switch (s)
//		{
//		case 200:
//			printf("OK\n");
//			break;
//		case 202:
//			printf("Accepted\n");
//			break;
//		case 400:
//			printf("Bad Request\n");
//			break;
//		case 403:
//			printf("Forbidden\n");
//			break;
//		case 404:
//			printf("Not Found\n");
//			break;
//		case 500:
//			printf("Internal Server Error\n");
//			break;
//		case 502:
//			printf("Bad Gateway\n");
//			break;
//		}
//	}
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf_s("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 1; i <= n; i++)
//		{
//			int j = 0;
//			for (j = 1; j <= i; j++)
//			{
//				printf("%d ", j);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf_s("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 1; i <= n; i++)
//		{
//			int j = 0;
//			for (j = 1; j <= i; j++)
//			{
//				printf("%d ", j);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}







//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int min = 100;//假设最小值是100
//	int max = 0;//假设最大值是0
//	int score = 0;
//	for (i = 0; i < 7; i++)
//	{
//		scanf("%d ", &score);//输入
//		sum += score;//求和
//		if (score > max)
//			max = score;//求最大值
//		if (score < min)
//			min = score;//求最小值
//	}
//	printf("%.2f\n", (sum - min - max) / 5.0);
//	return 0;
//}

#include <stdio.h>
int main()
{
	int n = 0;
	int arr[50] = { 0 };
	int m = 0;//要插入的数据
	//输入数据
	scanf_s("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	scanf_s("%d", &m);
	//处理
	for (i = n; i > 0; i--)
	{
		if (arr[i - 1] > m)
		{
			arr[i] = arr[i - 1];
		}
		else
		{
			arr[i] = m;
			break;
		}
	}
	//如果插入数字小于所有的数字
	if (i == 0)
	{
		arr[i] = m;
	}
	//打印
	for (i = 0; i < n + 1; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}








