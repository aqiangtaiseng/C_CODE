#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0;//���ö�������
	int i = 0;
	int j = 0;
	printf("���룺");
	scanf("%d", &n);
	for (i = 1; i <= n; i += 2)//�ϰ벿��
	{
		for (j = 0; j < n / 2 - i / 2; j++)
			printf(" ");
		for (j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}
	for (i=i-4; i >0; i-=2)//�°벿��
	{
		for (j = 0; j < n / 2 - i / 2; j++)
			printf(" ");
		for (j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}
		return 0;
}