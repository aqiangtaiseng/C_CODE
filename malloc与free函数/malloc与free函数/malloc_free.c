#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
int main()//malloc��free������ʹ��
{
	//malloc����Ϊ����һ�鶯̬�ڴ�Ŀռ䣨������ڴ�Ķ����������������Ǽ�ʹ����Ŀռ䣬��������˷��Ѿ����
	int* p = (int*)malloc(10 * sizeof(int));//����10�����͵��ڴ�ռ���p�����Ƹ��ڴ��
	if (p == NULL)
		printf("%s", strerror(errno));//�ж��ڴ��Ƿ�����ɹ�
	else//��γɹ���ʹ�ø��ڴ�
	{
		int i = 0;
		for (i = 0; i < 10; i++)
			* (p + i) = i;
		for (i = 0; i < 10; i++)
			printf("%d ", *(p + i));
	}
	free(p);//ʹ������ڴ棬�����ڴ�����ͷ�
	p = NULL;//����ָ����ڴ��ָ������������ã�����������

}