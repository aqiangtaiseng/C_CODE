#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0;//设置多大的菱形
	int i = 0;
	int j = 0;
	printf("输入：");
	scanf("%d", &n);
	for (i = 1; i <= n; i += 2)//上半部分
	{
		for (j = 0; j < n / 2 - i / 2; j++)
			printf(" ");
		for (j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}
	for (i=i-4; i >0; i-=2)//下半部分
	{
		for (j = 0; j < n / 2 - i / 2; j++)
			printf(" ");
		for (j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}
		return 0;
}