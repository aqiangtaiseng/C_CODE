#include"character.h"
unsigned my_strlen(const char* arr)
{
	unsigned num = 0;
	assert(arr);//确保该指针不是空指针
	while (*arr++)
		num++;
	return num;
}