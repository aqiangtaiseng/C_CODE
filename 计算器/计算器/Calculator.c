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
	int x = 0, y = 0;//����������Ҫ����ı���
	int(* pf[5])(int, int) = {0,add,sub,mul,div};
	int input = 0;
	do
	{
		test();//ѡ��˵�
		printf("����ѡ��>");
		scanf("%d", &input);
		if (input > 0 && input < 5)
		{
			printf("��������������:");
			scanf("%d%d", &x, &y);
			printf("���Ϊ��%d\n", pf[input](x,y));
		}
		else if (input == 0)
			printf("�˳��ɹ�\n");
		else
			printf("ѡ���������ѡ��\n");

	} while (input);
	

	return 0;
}