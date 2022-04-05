#define  _CRT_SECURE_NO_WARNINGS
#include "Contact.h"

//私有函数，不希望暴露给用户
static int FindByName(const struct Contact* ps, char NameToSearch[MAX_NAME])
{
	int i = 0;
	//1。查找名字是否存在
	//2。存在返回所在元素的下表
	//3。不存在返回-1
	for (i = 0; i < ps->size; i++)
	{
		if (!strcmp(ps->data[i].name, NameToSearch))
		{
			return i;
		}
	}
	if (i == ps->size)
	{
		return -1;
	}
}

void InitContact(struct Contact* ps)
{
	//memset(ps->data, 0, sizeof(ps->data));
	//ps->size = 0; //设置通讯录最初为0个元素
	//初始化可以存放3个人的信息
	ps->data = (struct PeoInfo*)malloc(DEFAULT_SZ * sizeof(struct PeoInfo));
	//开辟完空间后要进行检查
	if (ps->data == NULL)
	{
		return 0;
	}
	ps->capacity = DEFAULT_SZ;
	ps->size = 0;
}

void CheckCapacity(struct Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		//扩容
		ps->capacity += 2;
		struct PeoInfo* temp = realloc(ps->data, ps->capacity * sizeof(struct PeoInfo));
		if (temp != NULL)
		{
			ps->data = temp;
			printf("增容成功\n");
		}
		else
		{
			printf("增容失败\n");
		}
	}
}

void AddContact(struct Contact* ps)
{
	//检测当前通讯录的容量
	//1， 如果满了，增容
	//2， 如果不满，不做操作
	CheckCapacity(ps);
	//增加数据
	printf("请输入名字：>");
	scanf("%s", ps->data[ps->size].name);
	printf("请输入年龄：>");
	scanf("%d", &ps->data[ps->size].age);
	printf("请输入性别：>");
	scanf("%s", ps->data[ps->size].sex);
	printf("请输入电话：>");
	scanf("%s", ps->data[ps->size].tele);
	printf("请输入地址：>");
	scanf("%s", ps->data[ps->size].address);

	ps->size++;
	printf("添加成功\n");
	//if (ps->size == ps->capacity)
	//{
	//	printf("通讯录已满，无法增加");
	//	
	//}
	//else
	//{
	//	printf("请输入名字：>");
	//	scanf("%s", ps->data[ps->size].name);
	//	printf("请输入年龄：>");
	//	scanf("%d", &ps->data[ps->size].age);
	//	printf("请输入性别：>");
	//	scanf("%s", ps->data[ps->size].sex);
	//	printf("请输入电话：>");
	//	scanf("%s", ps->data[ps->size].tele);
	//	printf("请输入地址：>");
	//	scanf("%s", ps->data[ps->size].address);

	//	ps->size++;
	//	printf("添加成功\n");
	//}
}

void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		//标题
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		//数据
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].address);
		}
	}
}

void DelContact(struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空，无法删除\n");
		return;
	}
	else
	{
		printf("请输入要删除的人:>");
		char NameToDel[MAX_NAME];
		scanf("%s", NameToDel);
		int index = FindByName(ps, NameToDel);
		if ( index == -1)
		{
			printf("名字不存在\n");
		}
		else
		{
			int j = 0;
			for (j = index; j < ps->size - 1; j++)
			{
				ps->data[j] = ps->data[j + 1];
			}
			ps->size--;
			printf("%s已删除\n", NameToDel);
		}
	}
}

void SearchContact(const struct Contact * ps)
{
	char NameToSearch[MAX_NAME];
	printf("请输入要查找的人:>\n");
	scanf("%s", NameToSearch);
	int index = FindByName(ps, NameToSearch);
	if (index == -1)
	{
		printf("要查找的人不存在\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			ps->data[index].name,
			ps->data[index].age,
			ps->data[index].sex,
			ps->data[index].tele,
			ps->data[index].address);
	}
}

void ModifyContact(struct Contact * ps)
{
	char NameToModify[MAX_NAME];
	printf("请输入要修改的人的名字:>\n");
	scanf("%s", NameToModify);
	int index = FindByName(ps, NameToModify);
	if (index == -1)
	{
		printf("要修改的人不存在\n");
	}
	else
	{
		printf("请输入名字：>");
		scanf("%s", ps->data[index].name);
		printf("请输入年龄：>");
		scanf("%d", &ps->data[index].age);
		printf("请输入性别：>");
		scanf("%s", ps->data[index].sex);
		printf("请输入电话：>");
		scanf("%s", ps->data[index].tele);
		printf("请输入地址：>");
		scanf("%s", ps->data[index].address);

		printf("修改完成\n");
	}
}

void SortContact(struct Contact *ps)
{

}

void DestroyContact(struct Contact* ps)
{
	//注意ps是在栈空间创建的，不用free
	assert(ps);
	free(ps->data);
	ps->data = NULL;
}


