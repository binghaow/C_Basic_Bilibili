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

	char a2[] = { "abcdef" };
	printf("%d\n", sizeof(a2));          //7-sizeof（数组名）-计算的是数组总大小
	printf("%d\n", sizeof(a2 + 0));      //4/8-a2不是单独放在sizeof中，所以a2是首元素地址
	printf("%d\n", sizeof(*a2));         //1-数组名是首元素地址，*a2就是首元素
	printf("%d\n", sizeof(a2[1]));       //1-第二个元素大小
	printf("%d\n", sizeof(&a2));         //4/8-&a1取出的是数组地址
	printf("%d\n", sizeof(&a2 + 1));     //4/8-&a1得到数组的地址，偏移一个数组后还是地址
	printf("%d\n", sizeof(&a2[0] + 1));  //4/8-第二个元素的地址

	printf("%d\n", strlen(a2));          //6-sizeof（数组名）-计算的是数组总大小
	printf("%d\n", strlen(a2 + 0));      //6-a2不是单独放在sizeof中，所以a2是首元素地址
	//printf("%d\n", strlen(*a2));         //err-数组名是首元素地址，*a2就是首元素
	//printf("%d\n", strlen(a2[1]));       //err-第二个元素大小
	printf("%d\n", strlen(&a2));         //6-&a2取出的是数组地址,数组指针，类型为char (*)[7]与strlen的输入const char*不同
	printf("%d\n", strlen(&a2 + 1));     //随机-&a2得到数组的地址，偏移一个数组后还是地址
	printf("%d\n", strlen(&a2[0] + 1));  //5-第二个元素的地址

	char *p = "abcdef";
	printf("%d\n", sizeof(p));           //4/8,p是指针
	printf("%d\n", sizeof(p + 1));       //4/8, p依然是指针，指向b
	printf("%d\n", sizeof(*p));          //1，p指向第一个元素
	printf("%d\n", sizeof(p[0]));        //1, p指向第一个元素
	printf("%d\n", sizeof(&p));          //4/8, p的地址
	printf("%d\n", sizeof(&p + 1));      //4/8,p偏移后的地址
	printf("%d\n", sizeof(&p[0] + 1));   //4/8,p偏移后的地址

	printf("%d\n", strlen(p));           //6,
	printf("%d\n", strlen(p + 1));       //5, p依然是指针，指向b
	//printf("%d\n", strlen(*p));          //err，*p是第一个元素
	//printf("%d\n", strlen(p[0]));        //err, *p是第一个元素
	printf("%d\n", strlen(&p));          //随机值, p的地址
	printf("%d\n", strlen(&p + 1));      //随机值,p偏移后的地址
	printf("%d\n", strlen(&p[0] + 1));   //5,p偏移后的地址

	//二维数组
	int a3[3][4] = { 0 };
	printf("%d\n", sizeof(a3));             //48
	printf("%d\n", sizeof(a3[0][0]));       //4
	printf("%d\n", sizeof(a3[0]));          //16-a3[0]相当于第一行作为一维数组的数组名，单独放在sizeof()中，计算的是第一行的大小
	printf("%d\n", sizeof(a3[0] + 1));      //4-a3[0]是第一行的数组名，数组名此时是首元素地址，a3[0]其实就是第一行第一个元素的地址
											//所以a[0]+1就是第一行第二个元素的地址，地址大小是4个字节
	printf("%d\n", sizeof(*(a3[0] + 1)));   //4-第一行第二个元素
	printf("%d\n", sizeof(a3 + 1));         //4/8-a3是二维数组的数组名，没有sizeof(数组名),也没有&(数组名)，所以a是首元素地址，而
											//二维数组的首元素是第一行，a3就是第一行(首元素)的地址，a3+1就是第二行的地址
	printf("%d\n", sizeof(*(a3 + 1)));      //16-计算第二行的大小，等同于a3[1]
	printf("%d\n", sizeof(&a3[0] + 1));     //4-第二行的地址
	printf("%d\n", sizeof(*(&a3[0] + 1)));  //16-第二行数组的大小
	printf("%d\n", sizeof(*a3));            //16-a3是首元素地址，对于二维数组，是首元素地址
	printf("%d\n", sizeof(a3[3]));          //16-sizeof()不会计算里面的值，只看类型

	return 0;
}