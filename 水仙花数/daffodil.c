#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()//判断水仙花数（计算1~10000的水仙花数）
{
	int n = 0;//接收输入的值
	int k = 0;//次方数
	int ret = 0;//保存n的值
	int num = 0;//总数
	//接收输入的数
	int i = 0;
	
	//判断该数有几位,确定几次方
	for (i = 1; i <= 100000; i++)
	{
		num = 0;
		k = 0;
		n =i ;
		ret = n;//存输入的值进行次方相加
		
		while (n)
		{
			n = n / 10;
			k++;
		}
		//将各个位上的数都进行次方相加
		while (ret)
		{
			num += pow(ret % 10, k);
			ret = ret / 10;
		}

		if (i == num)
			printf("%d  ",i);
	}
	return 0;
}
//int main()//判断水仙花数（计算1~10000的水仙花数）
//{
//	int n = 0;//接收输入的值
//	int k = 0;//次方数
//	int ret = 0;//保存n的值
//	int num = 0;//总数
//	int judge = 0;//存n的值并最后判断是否为水仙花数
//	//接收输入的数
//	printf("输入数：");
//	scanf("%d", &n);
//	ret = n;//存输入的值进行次方相加
//	judge = n;//存输入的值进行比较
//	//判断该数有几位,确定几次方
//	
//	while (n)
//	{
//		n = n/10;
//		k++;
//	}
//	//将各个位上的数都进行次方相加
//	while (ret)
//	{
//		num+= pow(ret % 10, k);
//		ret=ret / 10;
//	}
//	if (judge == num)
//		printf("该数为水仙花数\n");
//	else
//		printf("不是水仙花数");
//	return 0;
//}