#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <errno.h>
#include <ctype.h>


////strlen
////1. Count
////2. Recursion
////3. Point - Pointer
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str);
//	while (*str != '\0') //while(*str) 
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	//strlen
//	int len = my_strlen("abcdef");
//
//	printf("%d\n", len); 
//	return 0;
//}

////strcpy
//
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//copy the string that src points to to the memory that dest points to, include '\0'
//	while (*dest++ = *src++){}
//	//return dest start address
//	return ret;
//	
//}
//int main()
//{
//	////Wrong example 1
//	//char* p = "abcdef"; //const char type, not modifierable
//	////Wrong example 2
//	//char arr2[] = "abcdefghij"; //src is larger than dest
//	////Wrong example 3
//	//char arr2[] = { 'a', 'b', 'c' }; //string is not ending with \0
//
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

////strcat
//
////char* my_strcat(char* dest, const char* src)
////{
////	assert(dest && src);
////	char* ret = dest;
////	while (*dest) { dest++; }
////	while (*dest++ = *src++) { ; }
////	return ret;
////}
////int main()
////{
////	char arr1[30] = "hello\0xxxxxxx";
////	char arr2[] = "world";
////	my_strcat(arr1, arr2);
////	printf("%s\n", arr1);
////	return 0;
////}

//strcmp
//VS2017      >,return 1; <, return -1; ==, return 0;
//linux-gcc,  >,return >0; <, return <0; ==, return 0，返回ASCII码值差;
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1, str2);
//	//compare
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0') return 0;
//		str1++;
//		str2++;
//	}
//	
//	if (*str1 > *str2)
//		return 1;
//	else
//		return -1;
//
//
////}

//////gcc
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1, str2);
//	//compare
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0') return 0;
//		str1++;
//		str2++;
//	}
//
//	return (*str1 - *str2);
//}
//
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abc";
//	printf("%d\n", my_strcmp(p1, p2));
//
//}

////strstr - 查找子字符串
//char *my_strstr(const char* string, const char* substring)
//{
//	assert(string && substring);            //不可以是空指针
//	if (*substring == '\0') return string;  //如果待查找是空字符，返回string
//	char* s1 = NULL;                      //不变string和substring,只动s1, s2。防止aabbccdd, bcc出现时
//	char* s2 = NULL;                      //指针需要回退的情况
//	char* cur = (char*)string;                     //记录可能匹配的起始位置,一定来自于string
//	while (*cur)
//	{
//		s1 = cur;                           //s1回到cur,上一次查找位置
//		s2 = (char*)substring;                     //s2回到substring首字母
//		while ((*s1) && (*s2) && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0') 
//		{
//			return (char*) cur;//强制将const char* 转换为char*防止报警
//		}
//		if (*s1 == '\0')
//		{
//			return NULL;
//		}
//
//		cur++;
//	}
//	return NULL; //cur遍历完string后依然没有return，说明没有匹配成功
//}
//int main()
//{
//	char *p1 = "abbbcdef";
//	char *p2 = "bbc";
//	char *ret = my_strstr(p1, p2);
//	if (ret == NULL) printf("not found");
//	else printf("%s\n", ret);
//}

////strtok
////192.168.31.121 -> 192 168 31 121
////zpw@baidu.com -> zpw baidu com
//int main()
//{
//	char arr[] = "zpw@baidu.com";
//	char arr1[] = "192.168.31.121";
//	char *p = "@.";
//	char *p1 = ".";
//	char buff[100] = {0};   //由于strtok会改变原字符串，所以要拷贝一份
//	strcpy(buff, arr);
//	////低效写法
//	//printf("%s\n", strtok(buff, p));//第一次切割传入字符串
//	//printf("%s\n", strtok(NULL, p));//第二次切割传入空指针
//	//printf("%s\n", strtok(NULL, p));
//	//正确写法
//	char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//
//	for (ret = strtok(arr1, p1); ret != NULL; ret = strtok(NULL, p1))
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}

////strerr错误报告函数，将错误码翻译为错误信息
////错误码  -   错误信息
////0      -    No error
////1      -    Operation not permitted
////2      -    No such file or directory
////3      -    No such process
////4      -    Interrupted function call
//
//int main()
//{
//	//errno是全局错误码的变量
//	//当C语言的库函数在执行过程中，发生了错误，就会把对应的错误码，赋值到errno中
//	//char *str = strerror(errno);
//	//printf("%s\n", str);
//
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//	return 0;
//}

int main()
{
	/*char ch = '?';*/
	//int ret = islower(ch);
	//int ret = isdigit(ch);
	//int ret = isspace(ch);
	//int ret = isxdigit(ch);
	//int ret = isupper(ch);
	//int ret = isalpha(ch);
	//int ret = isalnum(ch);
	//int ret = ispunct(ch);
	//int ret = isgraph(ch);
	//int ret = isprint(ch);
	//printf("%d\n", ret);
	
	char ch = tolower('Q');
	putchar(ch);
	char ch1 = toupper('q');
	putchar(ch1);
	char arr[] = "I am student";
	int i = 0;
	while (arr[i])
	{
		if (isupper(arr[i]))
		{
			arr[i] = tolower(arr[i]);
		}
		i++;
	}
	printf("%s\n", arr);



	return 0;
}