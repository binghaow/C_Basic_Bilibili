#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stddef.h>

////声明一个结构类型
////声明一个学生类型，是想通过学生类型来创建学生变量（对象）
////描述学生：属性+名字+电话+性别
//struct Stu
//{
//	char name[20];
//	int tele[12];
//	char sex[10];
//	int age;
//}stu3,stu4,stu5;
//
//struct
//{
//	int a;
//	char c;
//}sa;
//
//struct
//{
//	int a;
//	char c;
//}* psa;
//
//int main()
//{
//	struct Stu stu1 = { "Jack", 3132244452, "male", 23 };
//	struct Stu stu2 = { "Jim", 4524334524, "male", 34 };
//	
//	return 0;
//}

//结构体的自引用
//struct Node
//{
//	int value; //4
//	struct Node next; //sizeof(Node)??
//}; 

//struct Node
//{
//	int value;  //4
//	struct Node* next;  //4/8
//};

////typedef来重命名
//typedef struct Node
//{
//	int value;  //4
//	struct Node* next;  //4/8
//}Node;
//
//int main()
//{
//	struct Node head;
//	Node n1;
//	sizeof(head);
//	return 0;
//}

//结构体的定义，初始化与访问
//struct T
//{
//	double weight;
//	short age;
//};
//struct S
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//
//};
//
//int main()
//{
//	//struct S s = { 'c', 100, 3.14, "hello bit" };
//	struct S s = { 'c', {55.6, 30}, 100, 3.14, "hello bit" };
//	printf("%c %lf %d %d %lf %s\n", s.c, s.st.weight, s.st.age,s.a, s.d, s.arr);
//	return 0;
//}

////结构体的内存对齐
//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//int main()
//{
//	//struct S1 s1 = { 0 };
//	//struct S1 s2 = { 0 };
//	//printf("%d\n", sizeof(s1));
//	//printf("%d\n", sizeof(s2));
//	struct S3 s3 = { 0 };
//	printf("%d\n", sizeof(s3));
//	struct S4 s4 = { 0 };
//	printf("%d\n", sizeof(s4));
//	return 0;
//}

////offsetof() - 寻找结构体变量的偏移量
//struct S1
//{
//	char c;
//	int i;
//	double d;
//};
//int main()
//{
//	
//	int ret = offsetof(struct S1, c);
//	int ret1 = offsetof(struct S1, i);
//	int ret2 = offsetof(struct S1, d);
//	printf("%d %d %d\n", ret, ret1, ret2);
//
//	return 0;
//}