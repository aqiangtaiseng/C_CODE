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
	char* tap = sep;//������������ʼλ��
	while (*ret)
	{
		tap = sep;//���÷�������ĵ�ַ
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