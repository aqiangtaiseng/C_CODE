#include"character.h"
char* my_strcat(char* arr, const char* arr1)
{
	assert(arr && arr1);
	char* ret = arr;
	while (*arr)//�ҵ���׷���ַ������һ���ַ��ĺ�һ��λ��
	{
		arr++;
	}
	while (*arr1)
	{

		*arr = *arr1;
		arr++;
		arr1++;
	}
	return ret;
}