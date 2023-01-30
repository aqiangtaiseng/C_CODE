#include<stdio.h>
#include<string.h>
void swap(char* arr, char* arr1, int weight)
{
	int i = 0;
	int tmp = 0;
	for (i = 0; i < weight; i++)
	{
		tmp=*arr;
		*arr = *arr1;
		*arr1 = tmp;
		arr++;
		arr1++;
	}
}
void bubbling(void* base, int sz,int weight, int (*cmp)(void* e1,void*e2))//模拟实现一个qsort函数
{
	int i = 0, j = 0;
	//冒泡的趟数
	for (i = 0; i < sz-1; i++)
	{
		//冒泡的对数
		for (j = 0;j < sz - 1 - i; j++)
		{
			if (cmp(((char*)base + j * weight), ((char*)base + weight * (j + 1)))>0)
			{
				//交换函数
				swap(((char*)base + j * weight) , ((char*)base + weight * (j + 1)),weight);
			}
		}
	}

}
struct sr1 
{
	char name[20];
	short age;
};
int cmp_int(void* e1, void* e2)
{
	return (*(int*)e1) - (*(int*)e2);
}
int cmp_str(void* e1, void* e2)//
{
	return strcmp(((struct sr1*)e1)->name, ((struct sr1*)e2)->name);
}
int main()//自定义一个qsort函数
{
	int i = 0;
	struct sr1 s1[4] = { {"zhangsang", 15},{"lisi",28},{"wangwu",20} };
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(s1) / sizeof(s1[0]);
	bubbling(s1,sz,sizeof(s1[0]),cmp_str);
	for (i = 0; i < sz; i++)
	{
		printf("%s ", (s1+i)->name);
	}
		return 0;
}