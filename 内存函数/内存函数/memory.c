#include<stdio.h>
#include<string.h>
#include<assert.h>
void* my_memcpy(void* arr, const void* arr1, size_t set)//自定义内存拷贝函数
{
	assert(arr && arr1);//不是空指针
	void* ret = arr;//记录初始位置
	while(set)//循环字节个数
	*((char*)arr) = *((char*)arr1),set--,((char*)arr)++,((char*)arr1)++;
	return ret;
}
void* my_memmove(void* arr, const void* arr1, size_t set)
{
	void* ret =arr;
	assert(arr && arr1);
	while (set)
	{
		if (arr <= arr1)//重叠的高地址拷贝到低地址，从前向后拷贝
		{
			*((char*)arr) = *((char*)arr1);
			((char*)arr)++;
			((char*)arr1)++;
		}
		else//重叠的低地址拷贝到高地址，从后向前拷贝   因为内存中arr存储方式为：01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00 06 00 00 00 07 00 00 00......
		//如果加arr+set（16）地址就到了04 00 00 00 00 ->该位置05 00 00 00....所以set需要减一，该循环条件为set正好又控制了循环次数和地址位置;
		{
			*(((char*)arr) + set - 1) = *(((char*)arr1) + set - 1);
		}
		set--;
	}
	return ret;
}
int main()
{
	int i = 0;
	//库 函数内的内存函数
	//1.memcpy(拷贝函数)  格式：void* memcpy(void* destination,const void* source,size_t num);
	int arr[20] = { 1,2,3,4,5,6,7,8 };
	int arr1[20] = { 0 };
	//将arr的内容拷贝到arr1数组内
	//memcpy(arr1, arr, sizeof(arr));
	//用自己的my_memcpy实现该拷贝
	//my_memcpy(arr, arr1,sizeof(arr));
	//while (arr1[i])
		//printf("%d", arr[i]),i++;
	//自己拷贝自己的函数 1，2，3，4，5，6，6，8    将1234放到3456上  最后结果为 12123468
	//2.memmove(拷贝地址重叠的函数) 格数同 memcpy 
	//memmove(arr + 2, arr, 16);//将1234，拷贝到3456
	//while (arr[i])
		//printf("%d", arr[i]),i++;
	//自定义函数my_memmove实现重叠拷贝
	my_memmove(arr, arr+2,16);
	while (arr[i])
		printf("%d", arr[i]), i++;
	return 0;
}