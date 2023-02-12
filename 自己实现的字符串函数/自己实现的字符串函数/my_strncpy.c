#include"character.h"
char* my_strncpy(char* arr, const char* arr1, size_t len)
{
	char* ret = arr;
	assert(arr && arr1);
	while (len) {
		*arr = *arr1;
		arr++, arr1++;
		len--;
	}
	return ret;
}