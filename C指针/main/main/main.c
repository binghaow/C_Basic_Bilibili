#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>


////参数是数组的形式
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
////参数是指针的形式
//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}

//int main()
//{
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

	//// 3.数组指针
	////int* p = NULL; //指向整型的指针， 存放整型的地址
	////char* pc = NULL; //指向字符的指针，存放字符的地址
	//////指向数组的指针，存放数组的地址
	//////arr - 首元素地址
	//////&arr[0] - 首元素地址
	//////&arr - 数组的地址
	////int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	////int(*parr)[10] = &arr; //parr是指向数组的指针, 注意：int* parr[10]是数组指针，因为[]比*优先与p结合
	////
	//////char* carr[5];
	//////char* (*pa)[5] = &arr;
	////// 3.1数组指针的使用
	/////*int i = 0;
	////for (i = 0; i < 10; i++)
	////{
	////	printf("%d ", (*parr)[i]);
	////}
	////printf("\n");*/
	/////*int i = 0;
	////for (i = 0; i < 10; i++)
	////{
	////	printf("%d ", *(*parr + i));
	////}*/

	//// 我们发现数组指针对于一维数组很不方便，实际上数组指针应该用于二维数组
	//int arr[3][5] = { {1, 2, 3, 4, 5} , { 2, 3, 4, 5, 6}, {3, 4, 5, 6, 7} };
	//print1(arr, 3, 5);
	//print2(arr, 3, 5); //a
    //return 0;
//}

	//4,数组参数，指针参数
//void test(int arr[]) //ok? ok 一维数组传参，可以省略元素个数
//{}
//void test(int arr[10]) //ok? ok
//{}
//void test(int *arr) //ok? ok
//{} 
//void test2(int *arr[20]) //ok? ok 20可以省略
//{}
//void test2(int **arr) //ok? ok 二级指针
//{}
//
//int main(){
//	int arr[10] = { 0 };
//	int *arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//
//
//	return 0;
//}

//	//5， 二维数组传参
//void test(int arr[3][5]){} //ok, 完全一致
//void test1(int arr[][5]){}
////void test2(int arr[3][]){} //not ok, 不能省略列
////void test3(int *arr){} // not ok, 二维数组名代表一维数组的地址，类型不是int,而是int[] 
////void test4(int **arr){} // not ok, 一维数组的地址的类型不是二级指针
//void test5(int (*arr)[5]) {} //ok, 指针，指向数组
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	test1(arr);
//	//test2(arr);
//	//test3(arr);
//	//test4(arr);
//	test5(arr);
//
//	return 0;
//}

//	/*6，函数指针 - 存放函数地址的指针*/
//
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int(*p)(int, int) = Add; //记得括号
//
//	printf("%d\n", Add(a, b));
//	printf("%p\n", &Add);
//	printf("%p\n", Add); //和&Add一样
//	printf("%d\n", (*p)(20, 30));
//  printf("%d\n", p(20, 30));
//	return 0;
//}

	/*6，函数指针 - 存放函数地址的指针*/

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int(*p)(int, int) = Add; //记得括号
//
//	printf("%d\n", Add(a, b));
//	printf("%p\n", &Add);
//	printf("%p\n", Add); //和&Add一样
//	printf("%d\n", (*p)(20, 30));
//	return 0;
//}
//
//char* my_strcpy(char* dest, const char* src) {}
//int main()
//{
//	//1，写一个函数指针pf，能够指向my_strcpy
//	char* (*pf)(char*, const char*) = my_strcpy;
//	//2，写一个函数指针数组pfArr，能够存放四个my_strcpy的地址
//	char* (*pfarr[4])(char*, const char*) = { my_strcpy };
//
//
//	return 0;
//} 

/*7，指向函数指针数组的指针*/
//int add(int x, int y){ return 1; }
//int sub(int x, int y){ return 1; }
//int mul(int x, int y){ return 1; }
//int div(int x, int y){ return 1; }
//
//int main()
//{
//	int(*pfun[4])(int, int) = { add, sub, mul, div }; //函数指针数组
//	int (*(*ppfun)[4])(int, int); //指向函数指针数组的指针
//	return 0;
//}

///*7，回调函数以及模板*/
//
//void print(char *str)
//{
//	printf("hehe:%s", str);
//}
//
//void test( void (*p)(char *str) )
//{
//	printf("test\n");
//	p("bit");
//}
//
//int main()
//{
//	test(print );
//	return 0;
int cmp_int(const void* a, const void* b)
{
	return *(int*)a - *(int*)b;
}
void qsort_int()
{
	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	printf("before qsort_int\n");
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	qsort(arr, sz, sizeof(arr[0]), cmp_int);	

	printf("after qsort_int\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

}
int cmp_float(const void* a, const void* b)
{
	return (int)(*(float*)a - *(float*)b);
}
void qsort_float()
{
	float arr[] = { 1.0,3.0,5.0,7.0,9.0,2.0,4.0,6.0,8.0,0.0 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	printf("before qsort_float\n");
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%f ", arr[i]);
	}
	printf("\n");

	qsort(arr, sz, sizeof(arr[0]), cmp_float);

	printf("after qsort_float\n");
	for (i = 0; i < sz; i++)
	{
		printf("%f ", arr[i]);
	}
	printf("\n");

}
struct Stu
{
	char name[20];
	int age;
};
void printStu(struct Stu stu)
{
	printf("Name: %s, Age: %d\n", stu.name, stu.age);
}
int cmp_stu(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
void qsort_stu()
{
	struct Stu arr[] = { "Simon", 18, "Kevin", 29, "Ted", 23 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	printf("before qsort_stu\n");
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printStu(arr[i]);
	}
	printf("\n");

	qsort(arr, sz, sizeof(arr[0]), cmp_stu);

	printf("after qsort_stu\n");
	for (i = 0; i < sz; i++)
	{
		printStu(arr[i]);
	}
	printf("\n");

}
void swap(char* buf1, char* buf2, int width)
{
	//对于泛型交换，我们按字节交换
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char temp = *buf1;
		*buf1 = *buf2;
		*buf2 = temp;
		buf1++;
		buf2++;
	}
	
}
//实现bubble_sort函数的程序员，不知道未来排序的数据类型
//也不知道待比较两个元素的类型， 所以使用void* 来接受泛型
void bubbleSort(void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	for (i = sz; i > 0; i--)
	{
		int j = 0;
		for (j = 0; j < i - 1; j++)
		{
			if (cmp((char*)base+j*width , (char*)base +(j+1)*width) > 0)
			{
				//因为不知道被交换元素的类型，所以抽离出swap函数
				swap((char*)base + j * width, (char*)base + (j + 1)*width, width);
 			}
		}
	}
}

void bubbleSort_stu()
{
	struct Stu arr[] = { "Simon", 18, "Kevin", 29, "Ted", 23 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, sz, sizeof(arr[0]), cmp_stu);
}

void bubbleSort_int()
{
	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, sz, sizeof(arr[0]), cmp_int);
}
int main()
{
	//qsort_int();
	//qsort_float();
	//qsort_stu();
	/*bubbleSort_int();*/
	//bubbleSort_stu();
	
	


	return 0;
}