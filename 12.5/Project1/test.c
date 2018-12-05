//判断 链表的回文
//思路：
//		1.中间半逆置     O(n)
//		2.新建俩个链表指针，求出链表长度，俩个循环分别从头尾开始比较，while循环  
//		  每次循环初始化俩个链表指针   O(n2)

//输入俩个链表，求出共同结点 即链表相交后汇总
//思路：
//		1.用俩个循环，俩个链表依次遍历，直至找到相同的结点地址   O(n2)
//		2长度相同：一个循环，依次遍历到最后一个节点，直至找到相同结点
//		 长度不同：使其长度相等() 让长链表先走直至相同长度......               O(n)

//int getlength(struct ListNode *head)
//{
//	//略
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



//判断链表是否带环
//思路：
//		1.快慢指针遍历 类似跑圈

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
//返回入环指针
//思路：
//		1. 把带环问题 转换成俩个链表相交问题 ，令快慢指针相遇指针指向空 
//      2. 下列 俩个指针 一个从

//{
//	//调用上面判断指针，返回相遇指针
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


//给定一个链表，每个节点包含一个额外增加的随机指针，该指针可以指向链表中的任何节点或空节点。
//
//要求返回这个链表的深度拷贝
/**
* Definition for singly-linked list with a random pointer.
* struct RandomListNode {
*     int label;
*     struct RandomListNode *next;
*     struct RandomListNode *random;
* };
*/
//错误思路
//cur = head;
//while (cur){
//	newcode = copy(cur);
//}
//random指向的是原链表的指针
//思路:
//		1.扩张  1 2 3 4 null  >  1 1 2 2 3 3 4 4 null  
//		  cur->next->random = cur->random->next; cur = cur->next->next;
//		  拆  newNode->next = cur->next->next;



//大致代码
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
//	//复制原链表，新结点跟在老结点后面
//	while (oldNode)
//	{
//		newNode = creatNode(oldNode->label);
//		newNode->next = oldNode->next;
//		oldNode->next = newNode;
//
//		oldNode = oldNode->next->next;
//	}
//	//处理random指针
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