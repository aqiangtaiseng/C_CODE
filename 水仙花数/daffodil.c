#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()//�ж�ˮ�ɻ���������1~10000��ˮ�ɻ�����
{
	int n = 0;//���������ֵ
	int k = 0;//�η���
	int ret = 0;//����n��ֵ
	int num = 0;//����
	//�����������
	int i = 0;
	
	//�жϸ����м�λ,ȷ�����η�
	for (i = 1; i <= 100000; i++)
	{
		num = 0;
		k = 0;
		n =i ;
		ret = n;//�������ֵ���дη����
		
		while (n)
		{
			n = n / 10;
			k++;
		}
		//������λ�ϵ��������дη����
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
//int main()//�ж�ˮ�ɻ���������1~10000��ˮ�ɻ�����
//{
//	int n = 0;//���������ֵ
//	int k = 0;//�η���
//	int ret = 0;//����n��ֵ
//	int num = 0;//����
//	int judge = 0;//��n��ֵ������ж��Ƿ�Ϊˮ�ɻ���
//	//�����������
//	printf("��������");
//	scanf("%d", &n);
//	ret = n;//�������ֵ���дη����
//	judge = n;//�������ֵ���бȽ�
//	//�жϸ����м�λ,ȷ�����η�
//	
//	while (n)
//	{
//		n = n/10;
//		k++;
//	}
//	//������λ�ϵ��������дη����
//	while (ret)
//	{
//		num+= pow(ret % 10, k);
//		ret=ret / 10;
//	}
//	if (judge == num)
//		printf("����Ϊˮ�ɻ���\n");
//	else
//		printf("����ˮ�ɻ���");
//	return 0;
//}