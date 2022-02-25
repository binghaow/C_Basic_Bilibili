#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//参数是数组的形式
void print1(int arr[3][5], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

//参数是指针的形式
void print2(int(*p)[5], int x, int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%d ", *(*(p + i) + j));
		}
		printf("\n");
	}
}

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

	////2,指针数组
	//int arr[10] = { 0 }; //整型数组
	//char ch[5] = { 0 }; //字符数组
	//int* cha[4] = { NULL }; //存放整型指针的数组-指针数组
	//char* pch[5]; //存放字符指针的数组
	////例子
	//int arr1[] = { 1,2,3,4,5 };
	//int arr2[] = { 2,3,4,5,6 };
	//int arr3[] = { 3,4,5,6,7 };
	//int *parr[] = { arr1, arr2, arr3 };
	//int i = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	int j = 0;
	//	for (j = 0; j < 5; j++)
	//	{
	//		printf("%d ", *(parr[i] + j));
	//	}
	//	printf("\n");
	//}

	// 3.数组指针
	//int* p = NULL; //指向整型的指针， 存放整型的地址
	//char* pc = NULL; //指向字符的指针，存放字符的地址
	////指向数组的指针，存放数组的地址
	////arr - 首元素地址
	////&arr[0] - 首元素地址
	////&arr - 数组的地址
	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//int(*parr)[10] = &arr; //parr是指向数组的指针, 注意：int* parr[10]是数组指针，因为[]比*优先与p结合
	//
	////char* carr[5];
	////char* (*pa)[5] = &arr;
	//// 3.1数组指针的使用
	///*int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d ", (*parr)[i]);
	//}
	//printf("\n");*/
	///*int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d ", *(*parr + i));
	//}*/

	// 我们发现数组指针对于一维数组很不方便，实际上数组指针应该用于二维数组
	int arr[3][5] = { {1, 2, 3, 4, 5} , { 2, 3, 4, 5, 6}, {3, 4, 5, 6, 7} };
	print1(arr, 3, 5);
	print2(arr, 3, 5); //a















	return 0;


}