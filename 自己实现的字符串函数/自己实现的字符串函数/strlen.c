#include"character.h"
unsigned my_strlen(const char* arr)
{
	unsigned num = 0;
	assert(arr);//ȷ����ָ�벻�ǿ�ָ��
	while (*arr++)
		num++;
	return num;
}