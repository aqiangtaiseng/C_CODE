#include"character.h"
char* my_strstr(const char* arr, const char* arr1)
{
	assert(arr && arr1);
	if (*arr1 =='\0')
		return (char*)arr;
	const char* s = arr;
	const char* s1 = NULL;
	while (*arr)
	{
		s = arr;//重置字符串的位置
		s1=arr1;//初始子串地址
		while (*s == *s1)//当该字符相等时判断后面的字符是否也相等
		{

			s1++;
			s++;
			if (*s1 == '\0')//当要找的字符没有了，则表示该字符串有该子串
				return (char*)arr;//返回找到了子串的起始位置
		}
		arr++;
	}
	return NULL;//该字符串内没有该子串
}