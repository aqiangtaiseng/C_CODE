#include"character.h"
char* my_strcat(char* arr, const char* arr1)
{
	assert(arr && arr1);
	char* ret = arr;
	while (*arr)//找到被追加字符串最后一个字符的后一个位置
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