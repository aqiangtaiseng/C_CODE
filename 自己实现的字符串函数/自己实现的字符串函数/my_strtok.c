#include"character.h"
char* my_strtok(char* arr, const char* sep)
{
	static char* ret =NULL;
	if (arr != NULL)
		ret = arr;
	else if(arr==NULL)
		arr = ret;
	if (*ret == '\0')
		return NULL;
	char* tap = sep;//存符号数组的起始位置
	while (*ret)
	{
		tap = sep;//重置符号数组的地址
		while (*tap)
		{
			if (*ret == *tap)
			{
				*ret = '\0';
				ret++;
				return arr;
			}
			tap++;
		}
		ret++;
	}
	return arr;
}