//#include<stdio.h>
//int main()
//{
//	float weight = 0.0;
//	float hight = 0.0;
//	while (scanf("%f %f", &weight, &hight) != EOF)
//	{
//		float bmi = weight / (hight * hight / 100 / 100);
//		if (bmi < 18.5)
//		{
//			printf("Underweight\n");
//		}
//		else if (bmi >= 18.5 && bmi <= 23.9)
//		{
//			printf("Normal\n");
//		}
//		else if (bmi > 23.9 && bmi <= 27.9)
//		{
//			printf("Overweight\n");
//		}
//		else 
//		{
//			printf("Obese\n");
//		}
//	}
//	return 0;
//}


//
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	float a = 0.0;
//	float b = 0.0;
//	float c = 0.0;
//	while (scanf("%f %f %f", &a, &b, &c) != EOF)
//	{
//		if (a != 0)
//		{
//			float disc = b * b - 4 * a * c;
//			if (disc > 0.0)
//			{
//				printf("x1=%.2f;x2=%.2f\n",
//					(-b - sqrt(disc)) / (2 * a),
//					(-b + sqrt(disc)) / (2 * a)
//				);
//			}
//			else if (disc < 0.0)
//			{
//				printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n",
//					(-b) / (2 * a), sqrt(-disc) / (2 * a),
//					(-b) / (2 * a), sqrt(-disc) / (2 * a));
//			}
//			else
//			{
//				printf("x1=x2=%.2f\n", (-b) / (2 * a));
//			}
//		}
//		else
//		{
//			printf("Not quadratic equation\n");
//		}
//	}
//	return 0;
//}



#include <stdio.h>
int main()
{
	int y = 0;
	int m = 0;
	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	while (scanf("%d%d", &y, &m) != EOF)
	{
		int day = days[m - 1];
		if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
		{
			if (m == 2)
				day += 1;
		}
		printf("%d\n", day);
	}
	return 0;
}





