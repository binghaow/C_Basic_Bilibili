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


int main()
{
	int k = 2;
	char arr[] = "ABCD";
	char arr1[] = "BCDA";
	//leftRotate(arr, k);
	printf("%s\n", arr);
	printf("%d\n", isLeftMove(arr, arr1));
	return 0;
}