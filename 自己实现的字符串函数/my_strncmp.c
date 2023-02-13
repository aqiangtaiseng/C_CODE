#include"character.h"
int my_strncmp(const char* arr, const char* arr1, size_t len)
{
	assert(arr && arr1);
	while (len)
	{
		if (*arr < *arr1)
			return -1;
		else if (*arr > * arr1)
			return 1;
		else
			arr++, arr1++,len--;
	}
	return 0;
}