#include<stdio.h>
#include<string.h>
#include<assert.h>
void* my_memcpy(void* arr, const void* arr1, size_t set)//�Զ����ڴ濽������
{
	assert(arr && arr1);//���ǿ�ָ��
	void* ret = arr;//��¼��ʼλ��
	while(set)//ѭ���ֽڸ���
	*((char*)arr) = *((char*)arr1),set--,((char*)arr)++,((char*)arr1)++;
	return ret;
}
void* my_memmove(void* arr, const void* arr1, size_t set)
{
	void* ret =arr;
	assert(arr && arr1);
	while (set)
	{
		if (arr <= arr1)//�ص��ĸߵ�ַ�������͵�ַ����ǰ��󿽱�
		{
			*((char*)arr) = *((char*)arr1);
			((char*)arr)++;
			((char*)arr1)++;
		}
		else//�ص��ĵ͵�ַ�������ߵ�ַ���Ӻ���ǰ����   ��Ϊ�ڴ���arr�洢��ʽΪ��01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00 06 00 00 00 07 00 00 00......
		//�����arr+set��16����ַ�͵���04 00 00 00 00 ->��λ��05 00 00 00....����set��Ҫ��һ����ѭ������Ϊset�����ֿ�����ѭ�������͵�ַλ��;
		{
			*(((char*)arr) + set - 1) = *(((char*)arr1) + set - 1);
		}
		set--;
	}
	return ret;
}
int main()
{
	int i = 0;
	//�� �����ڵ��ڴ溯��
	//1.memcpy(��������)  ��ʽ��void* memcpy(void* destination,const void* source,size_t num);
	int arr[20] = { 1,2,3,4,5,6,7,8 };
	int arr1[20] = { 0 };
	//��arr�����ݿ�����arr1������
	//memcpy(arr1, arr, sizeof(arr));
	//���Լ���my_memcpyʵ�ָÿ���
	//my_memcpy(arr, arr1,sizeof(arr));
	//while (arr1[i])
		//printf("%d", arr[i]),i++;
	//�Լ������Լ��ĺ��� 1��2��3��4��5��6��6��8    ��1234�ŵ�3456��  �����Ϊ 12123468
	//2.memmove(������ַ�ص��ĺ���) ����ͬ memcpy 
	//memmove(arr + 2, arr, 16);//��1234��������3456
	//while (arr[i])
		//printf("%d", arr[i]),i++;
	//�Զ��庯��my_memmoveʵ���ص�����
	my_memmove(arr, arr+2,16);
	while (arr[i])
		printf("%d", arr[i]), i++;
	return 0;
}