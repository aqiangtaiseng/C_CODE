#include"character.h"
int main()//ģ��ִ���ַ����ĺ���
{
	char ip[] = "168.145.133.92";
	char* sep = ".";
	char arr[20] = "abbb";
	char arr1[] = "abbbcd";
	int len = my_strlen(arr);
	int len1 = my_strlen(arr1);
	//1.�ַ�������
	//printf("%d \t",my_strlen(arr1));//��֤�ַ����ĸ���
	//printf("%d \n", strlen(arr1));//��֤�ַ����ĸ������⺯����
	//2.�ַ�������
	//printf("%s\n", arr);
	//printf("%s\n",my_strcpy(arr, arr1));//��֤�ַ����Ŀ���
	//printf("%s\n", my_strncpy(arr, arr1,4));
	//printf("%s\n",strncpy(arr, arr1,4));//�ַ��������ַ�����
	//3.�ַ����Ƚ�
	//printf("��ʾ:\n���ڣ������0�����)\nС�ڣ������0С������\n���ڣ����0��\narr��arr1���Ϊ:%d \n", my_strcmp(arr, arr1));//��֤�ַ����ıȽ�
	//printf("��ʾ:\n���ڣ������0�����)\nС�ڣ������0С������\n���ڣ����0��\narr��arr1���Ϊ:%d \n", strcmp(arr, arr1));//��֤�ַ����ıȽϣ��⺯����
	//printf("��ʾ:\n���ڣ������0�����)\nС�ڣ������0С������\n���ڣ����0��\narr��arr1���Ϊ:%d \n", my_strncmp(arr, arr1,5));//��֤�ַ����ıȽ�
	//printf("��ʾ:\n���ڣ������0�����)\nС�ڣ������0С������\n���ڣ����0��\narr��arr1���Ϊ:%d \n", strncmp(arr, arr1,4));//��֤�ַ����ıȽϣ��⺯����
	//4.�ַ���׷��
	//printf("%s", my_strcat(arr, arr1));//��֤�ַ���׷��
	//printf("%s", strcat(arr, arr1));//��֤�ַ���׷�ӣ��⺯����
	//printf("%s\n", my_strncat(arr, arr, len));
	//printf("%s\n", strncat(arr, arr,len));
	//5.���Ӵ�
	//printf("%s ",my_strstr(arr, arr1));//���Ӵ�
	//printf("%s ",strstr(arr, arr1));//���Ӵ����⺯����
	//6.�ַ����ֶ�
	char* ret = NULL;
	for (ret = my_strtok(ip, sep); ret !=NULL; ret=my_strtok(NULL,sep))//��ӡÿһ��strtok�����ķ����ַ���
	//for (ret = strtok(ip, sep); ret !=NULL; ret=strtok(NULL,sep))//��ӡÿһ��strtok�����ķ����ַ���
	{
		printf("%s\n", ret);;
	}

	return 0;
}