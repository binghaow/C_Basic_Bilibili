#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <errno.h>

////文件的打开与关闭
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

//////流的概念，标准输入输出流
//int main()
//{
//	int ch = fgetc(stdin);//从标准输入流读信息
//	fputc(ch, stdout);    //从标准输出流显示信息
//}

////gets-从键盘上读取一行信息， fgets-从键盘，文件，屏幕等读取一行信息
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	char buf[1024] = { 0 };
//	fgets(buf, 1024, pf);
//	//printf("%s", buf);//注意，\n会被算在buf中打印出来，所以非必要可以不加
//	puts(buf);
//	fgets(buf, 1024, pf);
//	//printf("%s", buf);//注意，\n会被算在buf中打印出来，所以非必要可以不加
//	puts(buf);
//	fclose(pf);
//	pf = NULL;
//}

////puts-写一行信息到屏幕上， fputs-写一行信息到文件，屏幕等
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	fputs("hello\n", pf);
//	fputs("world", pf);
//	
//	fclose(pf);
//	pf = NULL;
//}

////操作价盘和屏幕
//int main()
//{
//
//	//从键盘读取一行文本
//	char buf[1024] = { 0 };
//	//fgets(buf, 1024, stdin);
//	////输出到屏幕上
//	//fputs(buf, stdout);
//
//	//gets(buf);
//	//puts(buf);
//	return 0;
//}

////写有格式的数据（非字符串）
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 100, 3.14, "bit" };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//格式化的形式写文件
//	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//}

////读有格式的数据（非字符串）
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//格式化的形式读文件
//	fscanf(pf, "%d %f %s", &(s.n), &(s.score), s.arr);
//	printf("%d %f %s", s.n, s.score, s.arr);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//}

////sscanf sprintf读写数据到字符串中
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 100, 3.14f, "abcdef" };
//	struct S temp = { 0 };
//	char buf[1024] = { 0 };
//	//把格式化的数据抓换成字符串存储到buf
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	//从Buf中读取格式化的数据到temp中
//	sscanf(buf, "%d %f %s", &(temp.n), &(temp.score), temp.arr);
//	printf("%s\n", buf);
//	printf("%d %f %s\n", temp.n, temp.score, temp.arr);
//}

////二进制读写fread, fwrite
//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//int main()
//{
//	//struct S s = { "张三", 20, 55.6 };
//	struct S temp = { 0 };
//	//FILE *pf = fopen("test.txt", "wb");
//	FILE *pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//二进制的形式写文件
//	//fwrite(&s, sizeof(struct S), 1, pf);
//	fread(&temp, sizeof(struct S), 1, pf);
//	printf("%s %d %lf\n", temp.name, temp.age, temp.score);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.定位文件指针-偏移
//	//fseek(pf, -2, SEEK_END);
//	fgetc(pf);
//	int pos = ftell(pf);
//	printf("%d\n", pos);
//	//2.读取文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	fclose(pf);
//	pf = NULL;
//}

//EOF
int main()
{
	FILE* pfRead = fopen("test.txt", "r");
	if (pfRead == NULL)
	{
		return 0;
	}
	int ch = 0;
	while ((ch = fgetc(pfRead)) != EOF)
	{
		putchar(ch);
	}
	if (ferror(pfRead))
	{
		printf("error\n");
	}
	else if (feof(pfRead))
	{
		printf("end of file\n");
	}
	printf("%d\n", fgetc(pfRead)); //-1 EOF
	fclose(pfRead);
	pfRead = NULL;

	//EOF;

}

////perror
//int main()
//{
//	//strerror - 把错误码对应的错误信息的字符串地址返回
//	//printf("%s\n", strerror(errno));
//
//	//perror
//	FILE* pf = fopen("test2.txt", "r");
//	if (pf == NULL)
//	{
//		perror("Open file test2 failed");
//		return 0;
//	}
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}