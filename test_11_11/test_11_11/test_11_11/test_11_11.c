#include<stdio.h>


//int main()
//{
//	int second = 0;
//
//
//
//	int hour = 0;
//	int minute = 0;
//	int seconds = 0;
//	//输入
//	scanf_s("%d",&second);
//	//计算
//	
//	hour = second / 60/60;
//	minute = second / 60 % 60;//秒换算成小时，不够换算的取模变成分钟
//	seconds = second % 60;//秒数模60直接换算成分钟，不够换的就变成秒了
//	//输出
//	printf("%d %d %d\n", hour, minute, seconds);
//	return 0;
//}




//int main()
//{
//	double D1 = 0.0;
//	double D2 = 0.0;
//	double D3 = 0.0;
//	//输入
//	scanf_s("%lf %lf %lf", &D1,&D2,&D3);//输入double类型
//	//计算
//	double sum = D1 + D2 + D3;
//	double average = sum / 3.0;
//	//输出
//	printf("%.2lf %.2lf\n", sum, average);//打印小数点后两位的double类型
//	return 0;
//}





//int main()
//{
//	int n = 0;
//	int h = 0;
//	int m = 0;
//	
//	//输入
//	//多组输入
//	while (scanf_s("%d %d %d", &n, &h, &m) != EOF)//当读取成功的时候 ，返回读取到的个数  比如这里是三， 当读取失败的时候返回EOF
//	{
//		if (m % h)
//		{
//			
//			printf("%d\n",n-m/h-1);
//		
//		}
//		else
//		{
//			printf("%d\n", n - m / h);
//		
//		
//		}
//	
//	
//	}
//	
//	
//	
//	return 0;
//}




//int main()
//{
//	double price = 0.0;
//	int month = 0;
//	int day = 0;
//	int flag = 0;//是否有优惠卷
//	double cut = 1.0;//折扣
//
//	return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//	float price = 0.0;
//	int m = 0;
//	int d = 0;
//	int flag = 0;
//	scanf_s("%f%d%d%d", &price, &m, &d, &flag);
//	if (m == 11 && d == 11)
//	{
//		price *= 0.7;
//		if (flag == 1)
//			price -= 50;
//	}
//	else if (m == 12 && d == 12)
//	{
//		price *= 0.8;
//		if (flag == 1)
//			price -= 50;
//	}
//	if (price < 0.0)
//		price = 0.0;
//	printf("%.2f\n", price);
//	return 0;
//}


#include <stdio.h>
int main()
{
    int n = 0;
    int score[40] = { 0 };
    scanf("%d", &n);
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &score[i]);
    }
    //对所有数字排序-冒泡排序
    int j = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (score[j] < score[j + 1])
            {
                int tmp = score[j];
                score[j] = score[j + 1];
                score[j + 1] = tmp;
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d ", score[i]);
    }
    return 0;
}
