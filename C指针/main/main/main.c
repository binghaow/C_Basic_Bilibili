#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	////1, 字符指针

	/*char ch = 'w';
	char* pc = &ch;*/

	/*char arr[] = "abcdef";
	char* pc = arr;
	printf("%s\n", pc);*/

	//char* p = "abcdef"; //"abcdef"是一个常量字符串， 将a的地址赋值给p
	//printf("%c\n", *p);
	//printf("%s\n", p);
	//*p = 'W';  //Error, cannot write contant string  
	//printf("%s\n", *p);

	//2,指针数组
	int arr[10] = { 0 }; //整型数组
	char ch[5] = { 0 }; //字符数组
	int* cha[4] = { NULL }; //存放整型指针的数组-指针数组
	char* pch[5]; //存放字符指针的数组
	//例子
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };
	int *parr[] = { arr1, arr2, arr3 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d ", *(parr[i] + j));
		}
		printf("\n");
	}
	return 0;
}