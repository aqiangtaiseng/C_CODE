#include"character.h"
int main()//模拟执行字符串的函数
{
	char ip[] = "168.145.133.92";
	char* sep = ".";
	char arr[20] = "abbb";
	char arr1[] = "abbbcd";
	int len = my_strlen(arr);
	int len1 = my_strlen(arr1);
	//1.字符串个数
	//printf("%d \t",my_strlen(arr1));//验证字符串的个数
	//printf("%d \n", strlen(arr1));//验证字符串的个数（库函数）
	//2.字符串拷贝
	//printf("%s\n", arr);
	//printf("%s\n",my_strcpy(arr, arr1));//验证字符串的拷贝
	//printf("%s\n", my_strncpy(arr, arr1,4));
	//printf("%s\n",strncpy(arr, arr1,4));//字符串限制字符拷贝
	//3.字符串比较
	//printf("提示:\n大于（输出比0大的数)\n小于（输出比0小的数）\n等于（输出0）\narr与arr1相比为:%d \n", my_strcmp(arr, arr1));//验证字符串的比较
	//printf("提示:\n大于（输出比0大的数)\n小于（输出比0小的数）\n等于（输出0）\narr与arr1相比为:%d \n", strcmp(arr, arr1));//验证字符串的比较（库函数）
	//printf("提示:\n大于（输出比0大的数)\n小于（输出比0小的数）\n等于（输出0）\narr与arr1相比为:%d \n", my_strncmp(arr, arr1,5));//验证字符串的比较
	//printf("提示:\n大于（输出比0大的数)\n小于（输出比0小的数）\n等于（输出0）\narr与arr1相比为:%d \n", strncmp(arr, arr1,4));//验证字符串的比较（库函数）
	//4.字符串追加
	//printf("%s", my_strcat(arr, arr1));//验证字符串追加
	//printf("%s", strcat(arr, arr1));//验证字符串追加（库函数）
	//printf("%s\n", my_strncat(arr, arr, len));
	//printf("%s\n", strncat(arr, arr,len));
	//5.找子串
	//printf("%s ",my_strstr(arr, arr1));//找子串
	//printf("%s ",strstr(arr, arr1));//找子串（库函数）
	//6.字符串分段
	char* ret = NULL;
	for (ret = my_strtok(ip, sep); ret !=NULL; ret=my_strtok(NULL,sep))//打印每一段strtok函数的返回字符串
	//for (ret = strtok(ip, sep); ret !=NULL; ret=strtok(NULL,sep))//打印每一段strtok函数的返回字符串
	{
		printf("%s\n", ret);;
	}

	return 0;
}