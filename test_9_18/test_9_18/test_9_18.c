
//���������������ݣ����������С��ͬ
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	
//	int arr1[]={1,2,3,4,5};
//	int arr2[]={6,7,8,9,0};
//	int sz=sizeof(arr1)/sizeof(arr1[0]);
//	int i=0;
//	int tmp=0;
//	for(i=0;i<sz;i++)
//	{
//		tmp=arr1[i];
//		arr1[i]=arr2[i];
//		arr2[i]=tmp;
//	}
//	
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",arr1[i]);
//	
//	}
//	printf("\n");
//	
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",arr2[i]);
//	
//	}
//	printf("\n");
//	return 0;
//
//}

//��ӡ1000��-2000��֮�������
//��ͨ���ܱ�4�����Ҳ��ܱ�100������Ϊ����
//�������ܱ�400������������
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int year=0;
	for(year=1000;year<=2000;year++)
	{
		if(year%4==0)
		{
			if(year%100!=0)
			{
			printf("%d  ",year);
			}
		}

		 if(year%400==0)//����ֻ����if������elseif  ��Ϊ�����������ǲ��й�ϵ
		{
			printf("%d  ",year);
		}

	}
	
	
	return 0;

}

