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
		s = arr;//�����ַ�����λ��
		s1=arr1;//��ʼ�Ӵ���ַ
		while (*s == *s1)//�����ַ����ʱ�жϺ�����ַ��Ƿ�Ҳ���
		{

			s1++;
			s++;
			if (*s1 == '\0')//��Ҫ�ҵ��ַ�û���ˣ����ʾ���ַ����и��Ӵ�
				return (char*)arr;//�����ҵ����Ӵ�����ʼλ��
		}
		arr++;
	}
	return NULL;//���ַ�����û�и��Ӵ�
}