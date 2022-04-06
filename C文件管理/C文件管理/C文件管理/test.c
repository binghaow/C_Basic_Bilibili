#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <errno.h>

//文件的打开与关闭
//int main()
//{
//	////打开当前路径下的文件test.txt
//	////绝对路径写法
//	//FILE* fptr = fopen("D:\\算法课程\\C语言编程Blibli\\C_Basic_Bilibili\\C文件管理\\C文件管理\\C文件管理\\test.txt", "r");
//	//
//	////相对路径写法
//	//fopen("test.txt", "r");
//	////..表示上一级路径
//	////.表示当前路径
//	//fopen("../test.txt", "r");//上一级路径中打开test.txt
//	//fopen("../../test.txt", "r"); //上上一级路径中打开test.txt
//
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)//当前路径下没有该文件，返回空指针
//	{
//		printf("%s\n", strerror(errno));
//	}
//	//读文件
//	//关闭文件，释放内存
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

////文件顺序写
//int main()
//{
//	FILE* pfWrite = fopen("test.txt", "w");
//	if (pfWrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//写文件
//		fputc('b', pfWrite);
//		fputc('i', pfWrite);
//		fputc('t', pfWrite);
//	}
//	fclose(pfWrite);
//	pfWrite = NULL;
//
//	return 0;
//}

////文件顺序读
//int main()
//{
//	FILE* pfRead = fopen("test.txt", "r");
//	if (pfRead == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//读文件
//		printf("%c ", fgetc(pfRead)); //b
//		printf("%c ", fgetc(pfRead)); //i
//		printf("%c ", fgetc(pfRead)); //t
//		
//	}
//	fclose(pfRead);
//	pfRead = NULL;
//
//	return 0;
//}

//流的概念，标准输入输出流
int main()
{
	int ch = fgetc(stdin);//从标准输入流读信息
	fputc(ch, stdout);    //从标准输出流显示信息
}