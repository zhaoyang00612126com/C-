//1、输出乘法口诀表
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//	int i=0;
//	int j=0;
//	for(i=1;i<=9;i++)
//	{
//		//打印一行
//		for(j=1;j<=i;j++)
//		{
//			printf("%d*%d=%-3d",j,i,i*j);//%2d表示右对齐，%-2d表示左对齐
//		}
//	printf("\n");
//	}
//
//
//}



//2、求两个数的做大公约数(辗转相除法)
//最大公约数指某几个整数共有因子中最大的一个
//m*n的最大公约数就是m和n的最小公倍数
//int main()
//{
//	/*int a=24;
//	int b=18;
//	int c=0;
//	c=a%b;
//	printf("%d\n",c);*/
//	int c=0;
//	int a=24;
//	int b=18;
//	
//	//while(a%b!=0)//%是取余数
//	//{
//	//	c=a%b;
//	//	a=b;
//	//	b=c;
//	//
//	//}
//	while((c=a%b))//%是取余数
//	{
//		
//		a=b;
//		b=c;
//	
//	}
//	//以上两种while的形式都可以
//	
//	
//	printf("%d\n",b);//这里应该打印b,而不是c。可以自己理解一下
//
//}


//3、查找凶手(推理题)
////日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词:
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。

//int main()
//{
//	 
//	char killer;
//	for(killer='a';killer<='d';killer++)
//	if((killer!='a')+(killer=='c')+(killer=='d')+(killer!='d')==3)
//	{
//		printf("%c\n",killer);
//	}
//	return 0;
//}

//5、打印100-200之间的素数
//素数一般指质数。质数是指在大于1的自然数中，除了1和它本身以外不再有其他因数的自然数

int main()
{
	int i=0;
	int j=0;
	
	for(i=100;i<=200;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j == 0)
				break;
		}
		
		if(i==j)
		printf("%d\n",i);
	}
	return 0;
}