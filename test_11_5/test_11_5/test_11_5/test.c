//#include <stdio.h>
//int main()
//{
//	printf("v   v\n");
//	printf(" v v \n");
//	printf("  v  \n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("The size of short is %d bytes.\n",sizeof(short));
//	printf("The size of short is %d bytes.\n", sizeof(int));
//	printf("The size of short is %d bytes.\n", sizeof(long));
//	printf("The size of short is %d bytes.\n", sizeof(long long));
//
//
//
//	return 0;
//}



//
//#include <stdio.h>
//int main()
//{
//	printf("%#o \n%#x\n",1234, 1234);//%o�˽���ת����  %xʮ������ת����
//
//	return 0;
//}
//



//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf_s("%d",&n);
//
//	while (n)
//	{
//		printf("%d",n%10);
//		n = n / 10;
//	}
//	return 0;
//}


#include <stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)//EOF�ļ�������־ end of file
	{
		putchar(ch + 32);
		printf("\n");
		getchar();//�ѻس��Ե�
	}
	return 0;
}

 