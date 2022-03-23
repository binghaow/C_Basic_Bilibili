#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


////将结构体在main文件中传参
//struct S
//{
//	char c;
//	int i;
//	double d; 
//};
//
//void init(struct S* s)
//{
//	s->c = 'a';
//	s->i = 4;
//	s->d = 2.0;
//}
//
////传值
//void Print1(struct S temp)
//{
//	printf("%c %d %lf\n", temp.c, temp.i, temp.d);
//}
//
////传址-更好的方法，防止栈消耗过大
//void Print2(const struct S* temp)
//{
//	printf("%c %d %lf\n", temp->c, temp->i, temp->d);
//}
//
//int main()
//{
//	struct S s1 = { 0 };
//	init(&s1);
//	Print1(s1);
//	Print2(&s1);
//
//}

//位段 - 二进制位
//struct S
//{
//	int a : 2; //a占2个比特位
//	int b : 5; //b占5个比特位
//	int c : 10;//c占10个比特位
//	int d : 30;//d占30个比特位
//};
////总共占47个比特位，需要6个字节
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s)); //8个字节
//}

////位段内存开辟方式
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//
//	return 0;
//}

////枚举类型
//enum Sex
//{
//	//枚举的可能取值-常量
//	//常量可以初始化，但不可以被更改
//	MALE = 2,
//	FEMALE = 4,
//	SECRET = 8
//};
//
//enum Color
//{
//	RED,  //0
//	GREEN,//1
//	BLUE  //2
//};
//
//int main()
//{
//	//enum Sex s = MALE;
//	//enum Color c = BLUE;
//	enum Color c = 2; //int复制给enum Color类型，这是错误做法
//	//printf("%d %d %d \n", RED, GREEN, BLUE);
//	//printf("%d %d %d \n", MALE, FEMALE, SECRET);
//	return 0;
//}

//联合（共用体）
//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u)); //4个字节
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	return 0;
//}

//百度面试题，大小端的计算
//如何判断当前计算机是大端还是小端存储

//int check_sys()
//{
//	int a = 1;
//	//返回1，表示小端
//	//返回0，表示大端
//	return *(char*)&a;
//}

////利用联合体共享内存的性质来提取第一个字节的内容
//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//int main()
//{
//	
//	if (1 == check_sys())
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//
//	//int a = 0x11223344;//44是低字节内容，11是高字节内容
//	//低地址------------------------->高地址
//	//...[][][][][][11][22][33][44][][][][][][][][][]...低字节高地址，高字节低地址，大端模式
//	//...[][][][][][44][33][22][11][][][][][][][][][]...低字节低地址，高字节高地址，小端模式
//	//讨论一个数据，放在内存中的存放的字节顺序
//	//大小端字节序问题
//	//
//
//	return 0;
//}