#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int find_num(int arr[][3], int k, int* row, int* low)
{
	////1.暴力求解法
	////遍历每一个数与k比较
	//int i = 0, j = 0;
	//for (i = 0; i < row; i++)
	//	for (j = 0; j < low; j++)
	//	{
	//		if (arr[i][j] == k)
	//			return 1; 
	//	}
	//return 0;
	//2.右上角比较法
	int i = 0;
	int j = *low - 1;
	while (i<*row&&*low>=0)
	{
		if (arr[i][j] > k)
			j--;
		else if (arr[i][j] < k)
			i++;
		else
		{
			*row = i;
			*low = j;
			return 1;
		}
	}
	return 0;
}
int main()//在杨氏矩阵中用编程编写一个你要找的某数
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };//杨氏矩阵数组
	int k = 0;//接收你要找的值
	printf("输入你要找的值：");
	scanf("%d", &k);
	int judge = 0;
	int row = sizeof(arr) / sizeof(arr[0]);
	int low = sizeof(arr[0]) / sizeof(arr[0][0]);
	judge=find_num(arr, k,&row,&low);
	if (judge == 1)
		printf("找到了,下标为%d %d\n", row,low);

	else
		printf("没找到");
	return 0;
}