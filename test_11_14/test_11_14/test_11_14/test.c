//#include <stdio.h>
////���Ⱦ������ָ�
////�����ʹ��float���Ȳ�����Ҫ��
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
//		//ȷ������
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			//ÿһ�еĴ�ӡ����ӡn��*+�ո�
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
//		//��������
//		for (i = 1; i <= n; i++)
//		{
//			//ÿһ��
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
//				//����ע��ո�
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


////����1-����д��
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf_s("%d", &n) != EOF)
//	{
//		int i = 0;
//		//��������
//		for (i = 0; i < n; i++)
//		{
//			//�ո�
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









////����2
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf_s("%d", &n) != EOF)
//	{
//		int i = 0;
//		int j = 0;
//		//����
//		for (i = 0; i < n; i++)
//		{
//			//һ��
//			for (j = 0; j < n; j++)
//			{
//				//�к��еĺ�
//				//������԰�������������������ܿ�����
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
//			//һ��
//			int j = 0;
//			//�ո�
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
//			//һ��
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
//	int min = 100;//������Сֵ��100
//	int max = 0;//�������ֵ��0
//	int score = 0;
//	for (i = 0; i < 7; i++)
//	{
//		scanf("%d ", &score);//����
//		sum += score;//���
//		if (score > max)
//			max = score;//�����ֵ
//		if (score < min)
//			min = score;//����Сֵ
//	}
//	printf("%.2f\n", (sum - min - max) / 5.0);
//	return 0;
//}

#include <stdio.h>
int main()
{
	int n = 0;
	int arr[50] = { 0 };
	int m = 0;//Ҫ���������
	//��������
	scanf_s("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	scanf_s("%d", &m);
	//����
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
	//�����������С�����е�����
	if (i == 0)
	{
		arr[i] = m;
	}
	//��ӡ
	for (i = 0; i < n + 1; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}








