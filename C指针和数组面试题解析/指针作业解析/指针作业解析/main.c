#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>


//void reverse(char* arr, int sz)
//{
//	for (int i = 0; i < sz / 2; i++)
//	{
//		char temp = arr[i];
//		arr[i] = arr[sz - i - 1];
//		arr[sz - i - 1] = temp;
//	}
//}
////写一个函数，逆序一个字符串的内容
//int main()
//{
//	char arr[] = "hello bit";
//	printf("%s\n", arr);
//
//	int sz = strlen(arr);
//	reverse(arr, sz);
//	printf("%s\n", arr);
//	return 0;
//}

////计算Sn = a+aa+aaa+aaaa+aaaaa的和，不考虑溢出
//int main()
//{
//	int a;
//	int b;
//	scanf("%d%d", &a, &b);
//	int i = 0, sum = 0, ret = 0;
//	for (i = 0; i < b; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

////打印0-10000水仙花数，水仙花数是指对于n位数，其各位数字的n次方之和等于该数本身，如153=1^3 +5^3+3^3 
//int main()
//{
//	int i = 0, j = 0, count = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//计算i的位数
//		if (i == 0)
//			count = 1;
//		else
//		{
//			count = 0;
//			j = i;
//			while (j > 0)
//			{
//				count++;
//				j /= 10;
//			}
//		}
//		//计算i的每一位的n次方之和
//		j = i;
//		int sum = 0;
//		while (j > 0)
//		{
//			sum += (int)(pow((j % 10), count) + 1e-9);
//			j /= 10;
//		}
//		//比较sum == i
//		if (sum == i)
//			printf("%d\n", i);
//	}
//	return 0;
//}

//打印一个棱形
/*
      *
     ***
    *****
   *******
  *********
 ***********
*************
 ***********
  *********
   *******
    *****
     ***
      *
*/
int main()
{
	int num = 0;
	scanf("%d", &num);
	if (num % 2 == 0)
	{
		printf("Please enter odd number\n");
		return 1;
	}
	//打印行
	for (int i = 0; i < num; i++)
	{
		//打印上半部分和中间
		if (i <= num / 2)
		{   
			//打印列，先打印空格，再打印*
			int j = 0;
			for(j = 0; j < (num / 2 - i); j++)
				printf(" ");
			for (j = 0; j < (2*i+1); j++)
				printf("*");
			printf("\n");
		}
		
		//打印下半部分
		if (i > num / 2)
		{
			//打印列，先打印空格，再打印*
			int j = 0;
			for (j = 0; j < i - num/2; j++)
			{
				printf(" ");
			}
			for (j = 0; j < 2 * (num - i) - 1; j++)
			{
				printf("*");
			}
			printf("\n");
		}

	}
	return 0;
}

//