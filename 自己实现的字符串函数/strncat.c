#include"character.h"
char* my_strncat(char* arr, const char* arr1, size_t len)//�Լ�׷���Լ�
{
	assert(arr && arr1);
	char* ret = arr;
	while (*arr)
		arr++;//�ҵ�\0d��λ��
	while (len)//����������ȷ��ѭ������
	{
		*arr = *arr1;
		arr++;
		arr1++;
		len--;
	}
	return ret;
}