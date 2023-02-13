#include"character.h"
int my_strcmp(const char* arr,const char* arr1)
{
	assert(arr && arr1);
	while ((*arr!='\0')||(*arr1!='\0'))
	{
		if (*arr > * arr1)
			return 1;
		else if (*arr < *arr1)
			return -1;
		arr++;
		arr1++;
	}
	return 0;
}