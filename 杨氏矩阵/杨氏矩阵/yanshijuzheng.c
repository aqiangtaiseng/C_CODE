#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int find_num(int arr[][3], int k, int* row, int* low)
{
	////1.������ⷨ
	////����ÿһ������k�Ƚ�
	//int i = 0, j = 0;
	//for (i = 0; i < row; i++)
	//	for (j = 0; j < low; j++)
	//	{
	//		if (arr[i][j] == k)
	//			return 1; 
	//	}
	//return 0;
	//2.���ϽǱȽϷ�
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
int main()//�����Ͼ������ñ�̱�дһ����Ҫ�ҵ�ĳ��
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };//���Ͼ�������
	int k = 0;//������Ҫ�ҵ�ֵ
	printf("������Ҫ�ҵ�ֵ��");
	scanf("%d", &k);
	int judge = 0;
	int row = sizeof(arr) / sizeof(arr[0]);
	int low = sizeof(arr[0]) / sizeof(arr[0][0]);
	judge=find_num(arr, k,&row,&low);
	if (judge == 1)
		printf("�ҵ���,�±�Ϊ%d %d\n", row,low);

	else
		printf("û�ҵ�");
	return 0;
}