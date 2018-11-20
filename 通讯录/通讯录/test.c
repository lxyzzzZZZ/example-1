//ͨѶ¼
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#define SIZE 1000
//ͨѶ¼
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
	//SIZE��ʾ����ͨѶ¼��Ϣ������
	PersonInfo* person_info;
	//��Ҫ�������������õ���Ϣ
	int size;		//��������ЧԪ�ظ���
	int capacity;	//��ǰ��̬�����������
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
	//�ж�ʲôʱ����Ҫ����
	if (g_addr_book.size < g_addr_book.capacity)
	{
		return;
	}
	//����
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
	g_addr_book.capacity = 5;	//�����ֵ��
	g_addr_book.person_info = (PersonInfo*)malloc(
		sizeof(PersonInfo)*g_addr_book.capacity);
}
int Menu()
{
	printf("=============================\n");
	printf("========= 1. ��� ===========\n");
	printf("========= 2. ɾ�� ===========\n");
	printf("========= 3. �޸� ===========\n");
	printf("========= 4. ���� ===========\n");
	printf("========= 5. ��ʾ ===========\n");
	printf("========= 6. ��� ===========\n");
	printf("========= 0. �˳� ===========\n");
	printf("=============================\n");
	printf("����������ѡ��:");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
void AddPersonInfo()
{
	CheckRealloc();
	printf("���һ�����û�\n");
	printf("�������û�����");
	scanf("%s", g_addr_book.person_info[g_addr_book.size].name);
	printf("�������Ա�");
	scanf("%s", g_addr_book.person_info[g_addr_book.size].sex);
	printf("���������䣺");
	scanf("%s", g_addr_book.person_info[g_addr_book.size].age);
	printf("������绰���룺");
	scanf("%s", g_addr_book.person_info[g_addr_book.size].phone);
	printf("�������ַ��");
	scanf("%s", g_addr_book.person_info[g_addr_book.size].addr);
	++g_addr_book.size;
	printf("����ɹ�\n");
}
void DelPersonInfo()
{
	printf("ɾ��ָ���û���¼\n");
	printf("������Ҫɾ������Ŀ�ı�ţ�");
	int num = 0;
	scanf("%d", &num);
	num--;
	if (num < 0 || num >= g_addr_book.size)
	{
		printf("���벻�Ϸ���ɾ��ʧ��!!!\n");
		return;
	}
	//���û�Ҫɾ���������һ��Ԫ�أ���ô��ֱ�� --size
	//���Ҫɾ�������м�Ԫ�أ��Ͱ����һ��Ԫ����䵽��Ԫ��λ��
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

	printf("ɾ���ɹ���\n");
	return;
}
void ModifyPersonInfo()
{
	printf("�޸��û���Ϣ��\n");
	printf("������Ҫ�޸ĵ���Ϣ��ţ�\n");
	int num = 0;
	scanf("%d", &num);
	num--;
	if (num < 0 || num >= g_addr_book.size)
	{
		printf("���벻�Ϸ����޸�ʧ��!\n");
		return;
	}
	printf("�������滻����Ϣ���û�����");
	scanf("%s", g_addr_book.person_info[num].name);
	printf("�Ա�");
	scanf("%s", g_addr_book.person_info[num].sex);
	printf("���䣺");
	scanf("%s", g_addr_book.person_info[num].age);
	printf("�绰���룺");
	scanf("%s", g_addr_book.person_info[num].phone);
	printf("��ַ��");
	scanf("%s", g_addr_book.person_info[num].addr);
	printf("�޸ĳɹ�!!!\n");
	return;
}
void FindPersonInfo()
{
	printf("�����û�����Ϣ!\n");
	printf("������Ҫ���ҵ��û�������");
	char name[1024] = { 0 };
	scanf("%s", name);
	int count = 0;
	for (int i = 0; i < g_addr_book.size; i++)
	{
		if (strcmp(name, g_addr_book.person_info[i].name) == 0)
		{
			printf("���ҳɹ�!!!,�鵽һ���û���Ϣ���Ա�%s,���䣺%s,����Ϊ��%s,��ַ��%s\n", 
				g_addr_book.person_info[i].sex, g_addr_book.person_info[i].age,
				g_addr_book.person_info[i].phone,g_addr_book.person_info[i].addr);
			count++;
		}
	}
	if (0 == count)
	{
		printf("û��ָ���û�����Ϣ!!!\n");
	}
	return;

}
void PrintPersonInfo()
{
	printf("��ӡ�����û���Ϣ\n");
	for (int i = 0; i < g_addr_book.size; i++)
	{
		printf("[%s] %s %s %s\n", g_addr_book.person_info[i].name,
			g_addr_book.person_info[i].sex, g_addr_book.person_info[i].age,
			g_addr_book.person_info[i].phone, g_addr_book.person_info[i].addr);
		printf("��ӡ��ɣ���ӡ��%d����¼��\n", g_addr_book.size);
	}
	return;
}
void ClearPersonInfo()
{
	printf("��Ҫ������е��û���Ϣ!!!\n");
	printf("��ȷ��Ҫɾ��ȫ���û���Ϣ��Yes/No\n");
	char input[1024] = { 0 };
	scanf("%s", input);
	if (strcmp(input, "Yes") != 0)
	{
		printf("��ȡ������!!!\n");
		return;
	}
	g_addr_book.size = 0;
	printf("�ɹ�ɾ�����е��û���Ϣ!!!\n");
	return;
}
//���浽�ļ���
void SavePersonInfo()
{
	printf("��ʼ���棡\n");
	FILE *fp = fopen("../test.txt", "w"); //�˴��ļ��ĵ�ַΪ��ǰ���·������һ��·��
	if (fp == NULL)
	{
		printf("�ļ���ʧ�ܣ�����ʧ�ܣ�\n");
		return;
	}
	for (int i = 0; i < g_addr_book.size; i++)
	{
		fwrite(&g_addr_book.person_info[i], sizeof(PersonInfo), 1, fp);
	}
	fclose(fp);
	printf("����ɹ���������%d����Ϣ\n", g_addr_book.size);
}
//����ʼǰ�������ļ���Ϣ
void LoadPersonInfo()
{
	printf("��ʼ���أ�\n");
	FILE *fp = fopen("../test.txt", "r");
	if (fp == NULL)
	{
		printf("�ļ���ʧ�ܣ�����ʧ�ܣ�\n");
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
	printf("���سɹ���������%d����Ϣ\n", g_addr_book.size);
}
int main()
{
	//��ʼ��
	Init();
	//��ӡ�û��˵���������ʾ�û�����
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