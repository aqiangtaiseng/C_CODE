#include"character.h"
char* my_strncat(char* arr, const char* arr1, size_t len)//自己追加自己
{
	assert(arr && arr1);
	char* ret = arr;
	while (*arr)
		arr++;//找到\0d的位置
	while (len)//根据自身长度确定循环次数
	{
		*arr = *arr1;
		arr++;
		arr1++;
		len--;
	}
	return ret;
}