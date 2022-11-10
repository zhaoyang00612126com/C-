//#include<stdio.h>
//int main()
//{
//
//	//输入
//	int high = 0;
//	int weight = 0;
//	double bmi = 0.0;
//	scanf_s("%d %d", &weight, &high);
//	//计算BMI
//	bmi = weight / ((high / 100.0) * (high / 100.0));
//	
//	//输出
//	printf("%.2lf\n",bmi);
//	return 0;
//}

//
//#include<math.h>
//#include<stdio.h>
//int main()
//{
//	double a = 0.0;
//	double b = 0.0;
//	double c = 0.0;
//	double zhouchang = 0.0;
//	double mianji = 0.0;
//	//输入
//	scanf_s("%lf %lf %lf",&a,&b,&c);
//	//计算
//	//海伦公式
//	zhouchang = a + b + c;
//	double p = zhouchang / 2;
//	mianji= sqrt(p * (p - a) * (p - b) * (p - c));
//	//输出
//	printf("zhouchang=%.2lf mianji=%.2lf",zhouchang,mianji );
//	return 0;
//}


//
//#include<math.h>
//#include<stdio.h>
//int main()
//{
//	double r = 0.0;
//	double v = 0.0;
//	double pi = 3.1415926;
//	scanf_s("%lf",&r);
//	v = 4.0 / 3 * pi * r * r * r;//4.0的目的是为了算出小数来
//	printf("%.3f\n", v);
//	return 0;
//}




//#include<math.h>
//#include<stdio.h>
//int main()
//{
//	int s1 = 0;//局部变量不初始化的情况下 里面放的是随机值
//	int s2 = 0;
//	int s3 = 0;
//	scanf_s("%d %d %d",&s1, &s2,&s3);
//	printf("score1=%d,score2=%d,score3=%d",s1,s2,s3);
//	return 0;
//}

//
//#include<math.h>
//#include<stdio.h>
//int main()
//{
//	int score[3] = { 0 };
//	int i = 0;
//	for (i=0;i<3;i++)
//	{
//		scanf_s("%d",&score[i]);
//	}
//	printf("score1=%d,score2=%d,score3=%d", score[0], score[1], score[2]);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i=10000;i<=99999;i++)
//	{
//		int j = 0;
//		int sum = 0;
//		for (j=10;j<=10000;j*=10)
//		{
//			sum += (i / j) * (i % j);
//		}
//		if (sum==i)
//		{
//			printf("%d ",i);
//		}
//		
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	
//
//		int a = 0;
//		int b = 0;
//		scanf_s("%d %d", &a, &b);
//		int c = (a % 100 + b % 100) % 100;
//		printf("%d\n", c);
//		return 0;
//	
//
//
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//
//	double d = 0;
//	scanf_s("%lf",&d);
//	int n = (int)d;//强制类型转换只保留整数
//	printf("%d\n",n%10);
//
//
//	return 0;
//}


#include<stdio.h>
int main()
{
	int age = 0;
	//输入
	scanf_s("%d",&age);
	long long second = age * 3.156e7;//3.156×十的七次方
	printf("%lld\n",second);
	return 0;
}
