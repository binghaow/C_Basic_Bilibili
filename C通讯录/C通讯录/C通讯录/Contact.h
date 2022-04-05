#define  _CRT_SECURE_NO_WARNINGS
//#define MAX 1000
#define DEFAULT_SZ 3
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//枚举，增加代码可读性
enum Option
{
	EXIT, //0
	ADD,  //1
	DEL,  //2
	SEARCH,//3
	MODIFY,//4
	SHOW,  //5
	SORT   //6
};

typedef struct PeoInfo
{
	char name[MAX_NAME];
	char tele[MAX_SEX];
	char sex[MAX_SEX];
	int age;
	char address[MAX_ADDR];
}PeoInfo;

//通讯录类型
//struct Contact
//{
//	struct PeoInfo data[MAX]; //存放1000个信息
//	int size;//记录当前已经有的元素个数
//};

typedef struct Contact
	{
		int capacity; //当前通讯录最大容量，用作扩容
		int size;//记录当前已经有的元素个数	
		struct PeoInfo *data; //使用指针，存储动态的开辟空间
}Contact;

//声明函数
void InitContact(struct Contact* ps);
//增加一个信息
void AddContact(struct Contact* ps);
//打印通讯录信息
void ShowContact(const struct Contact* ps);
//删除指定的联系人
void DelContact(struct Contact* ps);
//查找指定的联系人
void SearchContact(const struct Contact* ps);
//修改指定联系人
void ModifyContact(struct Contact* ps);
//对通讯录排序
void SortContact(struct Contact* ps);
//销毁动态生成的空间
void DestroyContact(struct Contact* ps);
