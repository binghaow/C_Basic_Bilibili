#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	//数组名是首元素地址
	//例外1，sizeof(数组名）- 数组名表示整个数组
	//例外2，&数组名 - 数组名表示整个数组
	//一维数组
	int a[] = { 1, 2, 3, 4 };
	printf("%d\n", sizeof(a));          //16-sizeof（数组名）-计算的是数组总大小
	printf("%d\n", sizeof(a + 0));      //4/8-a不是单独放在sizeof中，所以a是首元素地址
	printf("%d\n", sizeof(*a));         //4-数组名是首元素地址，*a就是首元素
	printf("%d\n", sizeof(a + 1));      //4-a不是单独放在sizeof中，所以a是首元素地址
	printf("%d\n", sizeof(a[1]));       //4-第二个元素大小
	printf("%d\n", sizeof(&a));         //4/8-&a取出的是数组地址
	printf("%d\n", sizeof(*&a));        //16-&a得到数组的地址，解引用后算的是数组的大小
	printf("%d\n", sizeof(&a + 1));     //4/8-&a得到数组的地址，偏移一个数组后还是地址
	printf("%d\n", sizeof(&a[0]));      //4/8-第一个元素的地址
	printf("%d\n", sizeof(&a[0] + 1));  //4/8-第二个元素的地址

	char a1[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	printf("%d\n", sizeof(a1));          //6-sizeof（数组名）-计算的是数组总大小
	printf("%d\n", sizeof(a1 + 0));      //4/8-a1不是单独放在sizeof中，所以a1是首元素地址
	printf("%d\n", sizeof(*a1));         //1-数组名是首元素地址，*a1就是首元素
	printf("%d\n", sizeof(a1[1]));       //1-第一个元素大小
	printf("%d\n", sizeof(&a1));         //4/8-&a1取出的是数组地址
	printf("%d\n", sizeof(&a1 + 1));     //4/8-&a1得到数组的地址，偏移一个数组后还是地址
	printf("%d\n", sizeof(&a1[0] + 1));  //4/8-第二个元素的地址

	printf("%d\n", strlen(a1));          //随机-找不到/0
	printf("%d\n", strlen(a1 + 0));      //随机-传入的依然是首元素地址
	//printf("%d\n", strlen(*a1));         //程序崩溃-*arr是'a'，也就是97(0x61)，被当作地址传入strlen，导致程序奔溃
	//printf("%d\n", strlen(a1[1]));       //程序崩溃-a1[1]是'b'，也就是98(0x62)，被当作地址传入strlen，导致程序奔溃
	printf("%d\n", strlen(&a1));         //随机
	printf("%d\n", strlen(&a1 + 1));     //随机-6，但是从下一个数组开始
	printf("%d\n", strlen(&a1[0] + 1));  //随机-1，但是从下一个元素开始

	return 0;
}