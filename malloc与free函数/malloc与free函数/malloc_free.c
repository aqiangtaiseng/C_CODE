#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
int main()//malloc与free函数的使用
{
	//malloc函数为申请一块动态内存的空间（存放于内存的堆区）用于满足我们即使所需的空间，避免造成浪费已经溢出
	int* p = (int*)malloc(10 * sizeof(int));//申请10个整型的内存空间用p来控制该内存块
	if (p == NULL)
		printf("%s", strerror(errno));//判断内存是否申请成功
	else//如何成功则使用该内存
	{
		int i = 0;
		for (i = 0; i < 10; i++)
			* (p + i) = i;
		for (i = 0; i < 10; i++)
			printf("%d ", *(p + i));
	}
	free(p);//使用完该内存，将该内存进行释放
	p = NULL;//并把指向该内存的指针变量进行重置，避免隐患。

}