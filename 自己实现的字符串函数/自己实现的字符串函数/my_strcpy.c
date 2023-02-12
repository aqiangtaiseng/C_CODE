#include"character.h"
char* my_strcpy(char* arr, const char* arr1)
{
	assert(arr && arr1);
	char* ret = arr;
	while (*arr++ = *arr1++);
	return ret;
}