//通讯录
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#define SIZE 1000
//通讯录
typedef struct PersonInfo
{
	char name[1024];
	char sex[1024];
	char age[1024];
	char phone[1024];
	char addr[1024];
}PersonInfo;

typedef struct AddrBook
{
	//SIZE表示的是通讯录信息的上限
	PersonInfo* person_info;
	//需要区分有用与无用的信息
	int size;		//数组中有效元素个数
	int capacity;	//当前动态数组最大容量
}AddrBook;


AddrBook g_addr_book;
enum
{
	EXIT,
	ADD,
	DEL,
	MODIFY,
	FIND,
	PRINT,
	CLEAR,
};
void CheckRealloc()
{
	//判断什么时候需要扩容
	if (g_addr_book.size < g_addr_book.capacity)
	{
		return;
	}
	//扩容
	g_addr_book.capacity *= 2;
	PersonInfo* tmp = (PersonInfo*)malloc(
		sizeof(PersonInfo)*g_addr_book.capacity);
	for (int i = 0; i < g_addr_book.size; i++)
	{
		tmp[i] = g_addr_book.person_info[i];
	}
	free(g_addr_book.person_info);
	g_addr_book.person_info = tmp;
}
void Init()
{
	g_addr_book.size = 0;
	//memset(g_addr_book.person_info, 0x0,
	//	sizeof(g_addr_book.person_info));
	g_addr_book.capacity = 5;	//随机赋值的
	g_addr_book.person_info = (PersonInfo*)malloc(
		sizeof(PersonInfo)*g_addr_book.capacity);
}
int Menu()
{
	printf("=============================\n");
	printf("========= 1. 添加 ===========\n");
	printf("========= 2. 删除 ===========\n");
	printf("========= 3. 修改 ===========\n");
	printf("========= 4. 查找 ===========\n");
	printf("========= 5. 显示 ===========\n");
	printf("========= 6. 清除 ===========\n");
	printf("========= 0. 退出 ===========\n");
	printf("=============================\n");
	printf("请输入您的选择:");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
void AddPersonInfo()
{
	CheckRealloc();
	printf("添加一个新用户\n");
	printf("请输入用户名：");
	scanf("%s", g_addr_book.person_info[g_addr_book.size].name);
	printf("请输入性别：");
	scanf("%s", g_addr_book.person_info[g_addr_book.size].sex);
	printf("请输入年龄：");
	scanf("%s", g_addr_book.person_info[g_addr_book.size].age);
	printf("请输入电话号码：");
	scanf("%s", g_addr_book.person_info[g_addr_book.size].phone);
	printf("请输入地址：");
	scanf("%s", g_addr_book.person_info[g_addr_book.size].addr);
	++g_addr_book.size;
	printf("插入成功\n");
}
void DelPersonInfo()
{
	printf("删除指定用户记录\n");
	printf("请输入要删除的条目的编号：");
	int num = 0;
	scanf("%d", &num);
	num--;
	if (num < 0 || num >= g_addr_book.size)
	{
		printf("输入不合法，删除失败!!!\n");
		return;
	}
	//若用户要删除的是最后一个元素，那么就直接 --size
	//如果要删除的是中间元素，就把最后一个元素填充到该元素位置
	if (num != g_addr_book.size - 1)
	{
		strcpy(g_addr_book.person_info[num].name,
			g_addr_book.person_info[g_addr_book.size - 1].name);
		strcpy(g_addr_book.person_info[num].sex,
			g_addr_book.person_info[g_addr_book.size - 1].sex);
		strcpy(g_addr_book.person_info[num].age,
			g_addr_book.person_info[g_addr_book.size - 1].age);
		strcpy(g_addr_book.person_info[num].phone,
			g_addr_book.person_info[g_addr_book.size - 1].phone);
		strcpy(g_addr_book.person_info[num].addr,
			g_addr_book.person_info[g_addr_book.size - 1].addr);

	}
	--g_addr_book.size;

	printf("删除成功！\n");
	return;
}
void ModifyPersonInfo()
{
	printf("修改用户信息！\n");
	printf("请输入要修改的信息编号：\n");
	int num = 0;
	scanf("%d", &num);
	num--;
	if (num < 0 || num >= g_addr_book.size)
	{
		printf("输入不合法，修改失败!\n");
		return;
	}
	printf("请输入替换的信息，用户名：");
	scanf("%s", g_addr_book.person_info[num].name);
	printf("性别：");
	scanf("%s", g_addr_book.person_info[num].sex);
	printf("年龄：");
	scanf("%s", g_addr_book.person_info[num].age);
	printf("电话号码：");
	scanf("%s", g_addr_book.person_info[num].phone);
	printf("地址：");
	scanf("%s", g_addr_book.person_info[num].addr);
	printf("修改成功!!!\n");
	return;
}
void FindPersonInfo()
{
	printf("查找用户的信息!\n");
	printf("请输入要查找的用户姓名：");
	char name[1024] = { 0 };
	scanf("%s", name);
	int count = 0;
	for (int i = 0; i < g_addr_book.size; i++)
	{
		if (strcmp(name, g_addr_book.person_info[i].name) == 0)
		{
			printf("查找成功!!!,查到一条用户信息，性别：%s,年龄：%s,号码为：%s,地址：%s\n", 
				g_addr_book.person_info[i].sex, g_addr_book.person_info[i].age,
				g_addr_book.person_info[i].phone,g_addr_book.person_info[i].addr);
			count++;
		}
	}
	if (0 == count)
	{
		printf("没有指定用户的信息!!!\n");
	}
	return;

}
void PrintPersonInfo()
{
	printf("打印所有用户信息\n");
	for (int i = 0; i < g_addr_book.size; i++)
	{
		printf("[%s] %s %s %s\n", g_addr_book.person_info[i].name,
			g_addr_book.person_info[i].sex, g_addr_book.person_info[i].age,
			g_addr_book.person_info[i].phone, g_addr_book.person_info[i].addr);
		printf("打印完成！打印了%d条记录！\n", g_addr_book.size);
	}
	return;
}
void ClearPersonInfo()
{
	printf("将要清楚所有的用户信息!!!\n");
	printf("您确定要删除全部用户信息吗？Yes/No\n");
	char input[1024] = { 0 };
	scanf("%s", input);
	if (strcmp(input, "Yes") != 0)
	{
		printf("已取消操作!!!\n");
		return;
	}
	g_addr_book.size = 0;
	printf("成功删除所有的用户信息!!!\n");
	return;
}
//保存到文件中
void SavePersonInfo()
{
	printf("开始保存！\n");
	FILE *fp = fopen("../test.txt", "w"); //此处文件的地址为当前相对路径的上一级路径
	if (fp == NULL)
	{
		printf("文件打开失败！保存失败！\n");
		return;
	}
	for (int i = 0; i < g_addr_book.size; i++)
	{
		fwrite(&g_addr_book.person_info[i], sizeof(PersonInfo), 1, fp);
	}
	fclose(fp);
	printf("保存成功！保存了%d条信息\n", g_addr_book.size);
}
//程序开始前，加载文件信息
void LoadPersonInfo()
{
	printf("开始加载！\n");
	FILE *fp = fopen("../test.txt", "r");
	if (fp == NULL)
	{
		printf("文件打开失败！加载失败！\n");
		return;
	}
	PersonInfo temp = { 0 };
	while (fread(&temp, sizeof(temp), 1, fp))
	{
		CheckRealloc();
		g_addr_book.person_info[g_addr_book.size] = temp;
		g_addr_book.size++;
	}
	fclose(fp);
	printf("加载成功！加载了%d条信息\n", g_addr_book.size);
}
int main()
{
	//初始化
	Init();
	//打印用户菜单，并且提示用户操作
	LoadPersonInfo();
	while (1)
	{
		int choice = Menu();
		switch (choice)
		{
		case ADD:
			AddPersonInfo();
			SavePersonInfo();
			break;
		case DEL:
			DelPersonInfo();
			SavePersonInfo();
			break;
		case MODIFY:
			ModifyPersonInfo();
			SavePersonInfo();
			break;
		case FIND:
			FindPersonInfo();
			break;
		case PRINT:
			PrintPersonInfo();
			break;
		case CLEAR:
			ClearPersonInfo();
			SavePersonInfo();
			break;
		case EXIT:
			SavePersonInfo();
			printf("byebye!!!\n");
			system("pause");
			return 0;
		default:
			break;		
		}
	}
	system("pause");
	return 0;
}