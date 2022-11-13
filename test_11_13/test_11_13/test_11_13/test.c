//#include<stdio.h>
//int main()
//{
//	int IQ = 0;
//	
//	while (scanf_s("%d", &IQ) != EOF)//实现多组输入
//	{
//	
//		if (IQ > 140)
//		{
//			printf("Genius");
//
//		}
//		else
//		{
//
//			printf("sb");
//
//		}
//	
//	
//	}
//	
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int IQ = 0;
//
//	while (~scanf_s("%d", &IQ) )//实现多组输入
//	{
//
//		if (IQ > 140)
//		{
//			printf("Genius");
//
//		}
//		else
//		{
//
//			printf("sb");
//
//		}
//
//
//	}
//
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int score = 0;
//
//	while (~scanf_s("%d", &score))//实现多组输入
//	{
//
//		if (score > 90&&score<100)
//		{
//			printf("perfect");
//
//		}
//		else
//		{
//
//			printf("sb");
//
//		}
//
//
//	}
//
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int score = 0;
//
//	while (~scanf_s("%d", &score))//实现多组输入
//	{
//
//		if (score > 60 )
//		{
//			printf("pass");
//
//		}
//		else
//		{
//
//			printf("fail");
//
//		}
//
//
//	}
//
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int num = 0;
//
//	while (~scanf_s("%d", &num))//实现多组输入
//	{
//
//		if (num %2==1)
//		{
//			printf("ODD");
//
//		}
//		else
//		{
//
//			printf("Even");
//
//		}
//
//
//	}
//
//
//	return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int num3 = 0;
//
//	while (~scanf_s("%d%d%d", &num1, &num2, &num3))//实现多组输入
//	{
//		int max = num1 > num2 ? num1 : num2;
//		max = max > num3 ? max : num3;
//		printf("%d", max);
//
//	}
//
//
//	return 0;
//}



//
//#include<stdio.h>
//int main()
//{
//	int num[3] = { 0 };
//
//	while (~scanf_s("%d%d%d", &num[0], &num[1], &num[2]))//实现多组输入
//	{
//		int max = num[0];
//		int i = 0;
//		for (i = 1;i < 3;i++)
//		{
//			if (num[i] > max)
//			{
//				max = num[i];
//			
//			
//			}
//		
//		
//		}
//		printf("%d\n", max);
//	}
//
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	char vowel[] = { "AEIOUaeiou" };
//	while ((ch = getchar()) != EOF)
//	{
//		int i = 0;
//		for (i=0;i<10;i++)
//		{
//			/*vowel[i];*/
//			if (ch == vowel[i])
//			{
//				printf("Vowel\n");
//				break;
//				
//			}
//		
//		}
//		if (i == 10)
//		{
//		
//			printf("Consonant\n");
//		
//		}
//		getchar();//处理\n
//	
//	}
//
//	return 0;
//}
//
//

//
//#include <stdio.h>
//int main()
//{
//	char ch = 0;
//	char arr[] = "AEIOUaeiou";
//	//在%c的前面写一个空格会消化掉前面所有的空白字符，然后读取一个字符
//	while (scanf(" %c", &ch) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			if (ch == arr[i])
//			{
//				printf("Vowel\n");
//				break;
//			}
//		}
//		if (i == 10)
//			printf("Consonant\n");
//	}
//	return 0;
//}
//


#include <stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		//判断字母
//		//if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
//		if (isalpha(ch))
//		{
//			printf("%c is an alphabet.\n", ch);
//		}
//		else
//		{
//			printf("%c is not an alphabet.\n", ch);
//		}
//		//清理掉\n
//		getchar();
//	}
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	//多组输入
//	while ((ch = getchar()) != EOF)
//	{
//		if (islower(ch))
//		{
//			printf("%c\n", toupper(ch));
//		}
//		else
//		{
//			printf("%c\n", tolower(ch));
//		}
//		//处理'\n'
//		getchar();
//	}
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	//多组输入
//	while ((ch = getchar()) != EOF)
//	{
//		if (islower(ch))//是否是小写字母的判断
//		{
//			printf("%c\n", toupper(ch));//转大写
//		}
//		else
//		{
//			printf("%c\n", tolower(ch));//转小写
//		}
//		//处理'\n'
//		getchar();
//	}
//	return 0;
//}


#include<stdio.h>
//int main()
//{
//	int t = 0;
//	while (scanf_s("%d", &t) != EOF)
//	{
//		if (t > 0)
//			printf("%d\n", 1);
//		else if (t == 0)
//			printf("%.1f\n", 0.5f);
//		else
//			printf("%d\n", 0);
//	}
//	return 0;
//}



#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	while (scanf("%d %d %d", &a, &b, &c) != EOF)
	{
		//满足条件就是三角形
		if (a + b > c && b + c > a && c + a > b)
		{
			if (a == b && b == c)
				printf("Equilateral triangle!\n");
			else if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
				printf("Isosceles triangle!\n");
			else
				printf("Ordinary triangle!\n");
		}
		else
			printf("Not a triangle!\n");
	}
	return 0;
}


