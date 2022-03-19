#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <cassert>
//喝汽水问题， 1瓶汽水1元，两个空瓶换一个汽水，给20元，可以喝多少汽水
//int main()
//{
//	int money;
//	scanf("%d", &money);
//	int sum = 0, remain = 0;
//	while (money >= 2)
//	{
//		sum += money;
//		money += money %2 ;
//		money /= 2;
//		
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int A, B, C, D, E = 1;
//	for (int A = 1; A <= 5; A++)
//	{
//		for (int B = 1; B <= 5; B++)
//		{
//			for (int C = 1; C <= 5; C++)
//			{
//				for (int D = 1; D <= 5; D++)
//				{
//					for (int E = 1; E <= 5; E++)
//					{
//						if (((B == 2) + (A == 3) == 1) &&
//							((B == 2) + (E == 4) == 1) &&
//							((C == 1) + (D == 2) == 1) &&
//							((C == 5) + (D == 3) == 1) &&
//							((E == 4) + (A == 1) == 1))
//							{
//							if(A*B*C*D*E == 120)
//								printf("A=%d B=%d C=%d D=%d E=%d\n", A, B, C, D, E);
//							}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//左旋字符串中k个字符 比如ABCD左旋1次为BCDA, ABCD左旋两次为CDAB  

//void leftRotate(char* arr, int k)
//{
//	while (k > 0)
//	{
//		char temp = arr[0];
//		int i = 1;
//		for (i = 1; arr[i] != 0; i++)
//		{
//			arr[i - 1] = arr[i];
//		}
//		if (arr[i] == 0)
//		{
//			arr[i - 1] = temp;
//		}
//		k--;
//	}
//} //Brute Force

//三部翻转法
/*
abcdef->翻转2次->ba fedc(先逆序ab,再逆序cdef)->cdefab(整体逆序）
*/

void reverse(char* left, char* right)
{
	assert((left != NULL) && (right != NULL));
	while (left < right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}
void leftRotate(char* arr, int k)
{
	assert(arr != NULL);
	int len = strlen(arr);
	//Reverse first k element
	reverse(arr, arr + k - 1);
	//Reverse left element
	reverse(arr + k, arr + len - 1);
	//Reverse whole element
	reverse(arr, arr + len - 1);
}
//int isLeftMove(char* arr, char* arr1)
//{
//	assert(arr&&arr1);
//	int len = 0;
//	if (strlen(arr) != strlen(arr1))
//		return 0;
//	else
//		len = strlen(arr);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		leftRotate(arr1, 1);
//		if (strcmp(arr, arr1) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//ABCDABCD一定是包含了所有旋转的组合

//判断一个字符串是否由另一个字符串旋转得来
//第二种方法，追加一个字符串, 如abcdef->abcdefabcdef，新字符串的子集包含所有旋转后的可能
//int is_left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0; //不能省略，防止abcdef和cdef被匹配上
//	//1.在str1字符串中追加一个str1字符串
//	//strcat(str1,str1) 自己给自己追加时不可以用这个函数，因为在赋值时会覆盖自己的/0导致无法终止
//	//strncat
//	strncat(str1, str1, 6); //abcdefabcdef
//	//2.判断str2指向的字符串是否是str1指向的字符串的字串
//	//strstr-找子串,如果找到，返回首字符在str1中的地址
//	char * ret = strstr(str1, str2);
//	if (ret == NULL)
//		return 0;
//	else
//		return 1;
//}
//
//int main()
//{
//	//int k = 2;
//	//char arr[] = "ABCD";
//	//char arr1[] = "BCDA";
//	////leftRotate(arr, k);
//	//printf("%s\n", arr);
//	//printf("%d\n", isLeftMove(arr, arr1));
//
//	char arr1[30] = "abcdef"; //提前预留了空间用于复制字符串
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}

//杨氏矩阵
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在
//要求时间复杂度小于O(N)
/*
1 2 3               1 2 3
4 5 6       or      2 3 4
7 8 9               3 4 5
*/

//int FindNum(int arr[3][3], int k, int row, int col)
//{
//	//find the right left cornor of array
//	int x = 0;
//	int y = col - 1;
//	while ((x < row) && (y >= 0))
//	{
//		if (arr[x][y] < k)
//		{
//			x++; //从待访问的矩阵中删除这一行
//		}
//		else if (arr[x][y] == k)
//		{
//			return 1;
//		}
//		else		//arr[x][y] < k
//		{
//			y--; //从待访问的矩阵中删除这一列
//		}
//	}
//}

//假设要求FindNum返回横纵坐标， 那么传参的时候要传入地址
void FindNum(int arr[3][3], int k, int* px, int* py)
{
	//find the right left cornor of array
	int x = 0;
	int y = *py - 1;
	while ((x <= *py - 1) && (y >= 0))
	{
		if (arr[x][y] < k)
		{
			x++; //从待访问的矩阵中删除这一行
		}
		else if (arr[x][y] == k)
		{
			*px = x;
			*py = y;
			return;
		}
		else		//arr[x][y] < k
		{
			y--; //从待访问的矩阵中删除这一列
		}
	}
	x = y = -1;
	return;
}

int main()
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int k = 7; //to be searched
	int x = 3;
	int y = 3;
	//int ret = FindNum(arr, k, 3, 3);
	FindNum(arr, k, &x, &y); 
	//这个参数的设计叫做返回型参数，参数既有传入的作用，也有传出的作用

	if (x != -1)
	{
		printf("Found at (%d,%d)\n", x, y);
	}
	else
	{
		printf("Not Found\n");
	}
	return 0;
}
