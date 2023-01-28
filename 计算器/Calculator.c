#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"menu.h"
void test()
{
	printf("*********************\n"); 
	printf("*1.add   2.sub*******\n");
	printf("*3.mul   4.div*******\n");
	printf("**** 0.exit  ********\n");
	printf("*********************\n");
}
int main()
{
	int x = 0, y = 0;//接受两个需要计算的变量
	int(* pf[5])(int, int) = {0,add,sub,mul,div};
	int input = 0;
	do
	{
		test();//选择菜单
		printf("输入选项>");
		scanf("%d", &input);
		if (input > 0 && input < 5)
		{
			printf("输入两个操作数:");
			scanf("%d%d", &x, &y);
			printf("结果为：%d\n", pf[input](x,y));
		}
		else if (input == 0)
			printf("退出成功\n");
		else
			printf("选择错误，重新选择\n");

	} while (input);
	

	return 0;
}