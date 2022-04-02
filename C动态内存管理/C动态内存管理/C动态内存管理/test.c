#define  _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <assert.h>
#include <errno.h>
#include <stdio.h>
//struct S
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	//struct S arr[50]; //50个struct S类型的数据
//	//30-浪费
//	//60-不够
//	//向内存申请10个整型的空间
//	int*p = (int*)malloc(10*sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//当动态空间不再使用的时候
//	free(p);
//	p = NULL;
//}
//
////C语言可以创建边长数组-C99中增加了，但是不是所有编译器都支持

//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//释放空间, free是用来释放动态开辟的空间的
//	free(p);
//	p = NULL;
//}

////reallocs
////调整动态开辟内存空间的大小
//
//int main()
//{
//	int *p = (int *)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//假设这里，20个字节不能满足我们使用，希望能够有40个字节的空间
//	//这里可以使用realloc来调整动态开辟的内存
//	//realloc使用的注意事项
//	//1。如果p指向的空间之后有足够的内存空间，可以追加，则直接追加，后返回p
//	//2。如果p指向的空间之后没有足够的内存空间，则realloc函数会重新找一块块新的内存区域
//	//开辟一块满足需求的空间，并且把原来内存中的数据拷贝过来，并释放旧内存，最后返回新开辟的内存空间
//	//地址
//	//3。得用一个新的变量来接受realloc的返回值
//
//	int* p1 = (int*)realloc(p, 4000);
//	//int* p = (int*)realloc(p, 4000);
//	//int* p = (int*)realloc(p, INT_MAX);//空间追加失败，返回空指针，覆盖了p，这很危险
//	//int* ptr = (int*)realloc(p, INT_MAX)
//	//if(ptr != NULL)
//	//    p = ptr;
//	//
//	
//	int i = 0;
//	for (i = 5; i < 10; i++)
//	{
//		*(p1 + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p1 + i));
//	}
//	free(p1);
//	p1 = NULL;
//
//	//realloc也可以用来开辟新空间
//	int* p2 = (int*)realloc(NULL, 40); //等价于malloc
//}

//int main()
//{
//	while(1)
//	{
//		malloc(1);
//	}
//	return 0;
//}