//�ж� ����Ļ���
//˼·��
//		1.�м������     O(n)
//		2.�½���������ָ�룬��������ȣ�����ѭ���ֱ��ͷβ��ʼ�Ƚϣ�whileѭ��  
//		  ÿ��ѭ����ʼ����������ָ��   O(n2)

//�����������������ͬ��� �������ཻ�����
//˼·��
//		1.������ѭ���������������α�����ֱ���ҵ���ͬ�Ľ���ַ   O(n2)
//		2������ͬ��һ��ѭ�������α��������һ���ڵ㣬ֱ���ҵ���ͬ���
//		 ���Ȳ�ͬ��ʹ�䳤�����() �ó���������ֱ����ͬ����......               O(n)

//int getlength(struct ListNode *head)
//{
//	//��
//}
//struct ListNode* get(struct ListNode* p1, struct ListNode* p2)
//{
//	int len1 = getlength(p1);
//	int len2 = getlength(p2);
//	struct ListNode* longer = p2;
//	struct ListNode* shorter = p1;
//	int diff = len2 -len1;
//	if (len1 >= len2)
//	{
//		longer = p1;
//		shorter = p2;
//		diff = len1 - len2;
//	}
//	for (int i = 0; i < diff; i++)
//	{
//		longer = longer->next;
//	}
//	while (longer != shorter)
//	{
//		longer = longer->next;
//		shorter = shorter->next;
//	}
//	return longer;
//}



//�ж������Ƿ����
//˼·��
//		1.����ָ����� ������Ȧ

//bool  hasCysle(struct ListNode* head)
//{
//	struct ListNode* fast = head;
//	struct ListNode* slow = head;
//	do
//	{
//		if (fast == NULL)
//		{
//			break;
//		}
//		fast = fast->next;
//		if (fast == NULL)
//		{
//			break;
//		}
//		fast = fast->next;
//		slow = slow->next;
//	} while (fast != slow);
//	if (fast == NULL)
//	{
//		return false;
//	}
//	else
//	{
//		return true;
//	}
//}
//�����뻷ָ��
//˼·��
//		1. �Ѵ������� ת�������������ཻ���� �������ָ������ָ��ָ��� 
//      2. ���� ����ָ�� һ����

//{
//	//���������ж�ָ�룬��������ָ��
//	if (meet == NULL)
//	{
//		rerutn NULL;
//	}
//	struct ListNode* p1 = head;
//	struct ListNode* p2 = meet;
//	while (p1 != p2)
//	{
//		p1->next;
//		p2->next;
//	}
//	return p1;
//}


//����һ������ÿ���ڵ����һ���������ӵ����ָ�룬��ָ�����ָ�������е��κνڵ��սڵ㡣
//
//Ҫ�󷵻�����������ȿ���
/**
* Definition for singly-linked list with a random pointer.
* struct RandomListNode {
*     int label;
*     struct RandomListNode *next;
*     struct RandomListNode *random;
* };
*/
//����˼·
//cur = head;
//while (cur){
//	newcode = copy(cur);
//}
//randomָ�����ԭ�����ָ��
//˼·:
//		1.����  1 2 3 4 null  >  1 1 2 2 3 3 4 4 null  
//		  cur->next->random = cur->random->next; cur = cur->next->next;
//		  ��  newNode->next = cur->next->next;



//���´���
//  creatNode
//{
//	p->label = lable;
//	p->next = p->random = NULL;
//}
//struct RandomListNode *copyRandomList(struct RandomListNode *head) 
//{
//	if (head == NULL)
//	{
//		return NULL;
//	}
//	//����ԭ�����½������Ͻ�����
//	while (oldNode)
//	{
//		newNode = creatNode(oldNode->label);
//		newNode->next = oldNode->next;
//		oldNode->next = newNode;
//
//		oldNode = oldNode->next->next;
//	}
//	//����randomָ��
//	oldNode = head;
//	while (oldeNode)
//	{
//		if (oldNode->random != NULL)
//		{
//			newNode->random = oldNode->random->next;
//		}
//		oldNode = oldNode->next->next;
//	}
//	oldNode = head;
//	while (oldNode)
//	{
//		oldNode->next = newNode->next;
//		if (oldNode->next != NULL)
//		{
//			newNode->next = oldNode->next;
//		}
//		newNode->next = oldNode->next ->next;
//
//		oldNode = oldNode->next;
//	}
//	return newNode;
//}