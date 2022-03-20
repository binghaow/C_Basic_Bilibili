#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <memory.h>
#include <cassert>
//struct S
//{
//	char name[20];
//	int age;
//};
//
//void*  my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	//int i = 0;
//	//for (i = 0; i < num; i++)
//	//{
//	//	((char*)dest)[i] = ((char*)src)[i];
//	//}
//	//老师的做法 
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
////int main()
////{
////	//strcpy无法拷贝整型数组，浮点数组和结构体
////	//int arr1[] = { 1,2,3,4,5 };
////	//int arr[5] = { 0 };
////	////strcpy(arr2, arr1);
////
////	////拷贝整型数组
////	//memcpy(arr, arr1, 20);
////	//int i = 0;
////	//for (i = 0; i < 5; i++)
////	//{
////	//	printf("%d\n", arr[i]);
////	//}
////	//return 0;
////
////	////拷贝结构体
////	//struct S s1[] = { "Jame", 20, "Cony", 14, "Jack", 15};
////	//struct S s2[3] = { 0 };
////	//my_memcpy(s2, s1, sizeof(s1));
////	//for (int i = 0; i < 3; i++)
////	//{
////	//	printf("The name is %s, The age is %d\n", (s2 + i)->name, (s2 + i)->age);
////	//}
////
////	////拷贝浮点数组
////	//float arr1[] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
////	//float arr2[5] = { 0 };
////	//memcpy(arr2, arr1, sizeof(arr1));
////	//int i = 0;
////	//for (i = 0; i < 5; i++)
////	//{
////	//	printf("%f\n", arr2[i]);
////	//}
////	//return 0;
////} 
//
//void* my_memmove(void* dest,const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	//比较源和目的地空间的前后
//	if (dest > src) //从后往前
//	{
//		int i = 0;
//		for (i = num - 1; i >= 0; i--)
//		{
//			*((char*)dest + i) = *((char*)src + i);
//		}
//	}
//	else //dest < src从前往后
//	{
//		int i = 0;
//		for (i = 0; i < num; i++)
//		{
//			((char*)dest)[i] = ((char*)src)[i];
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	//我们自己实现的memcpy无法做到自己和自己的元素拷贝，也成为重叠拷贝
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//memcpy(arr + 2, arr, 20);
//	//my_memmove(arr + 2, arr, 20);
//	my_memmove(arr, arr+2, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//memcmp
//int main()
//{
//	//arr1: 01000000 02000000 0300000
//	//arr2: 01000000 02000000 0500000
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret = memcmp(arr1, arr2, 9);
//	printf("%d\n", ret);
//
//}

//memset - 内存设置
int main()
{
	char arr[10] = "";
	memset(arr, '#', 10);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%c\t", arr[i]);
	}
	return 0;
}