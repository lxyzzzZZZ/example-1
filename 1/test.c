//给定一个带有头结点 head 的非空单链表，返回链表的中间结点。
//
//如果有两个中间结点，则返回第二个中间结点。
///**
//* Definition for singly-linked list.
//* struct ListNode {
//*     int val;
//*     struct ListNode *next;
//* };
//*/
//int getlength(struct ListNode * head){
//	int len = 0;
//	struct ListNode* cur = head;
//	while (cur){
//		len++;
//		cur = cur->next;
//	}
//	return len;
//}
//struct ListNode* middleNode(struct ListNode* head) {
//	int steps = getlength(head) / 2;
//	struct ListNode* moddle = head;
//	while (steps--){
//		head = head->next;
//		moddle = head;
//	}
//	return moddle;
//}


//双链表循环
//struct ListNode* middleNode(struct ListNode* head) {
//	struct ListNode* fast = head;
//	struct ListNode* slow = head;
//	while (fast){
//		fast = fast->next;
//		if (fast == NULL){
//			break;
//		}
//		fast = fast->next;
//		slow = slow->next;
//	}
//	return slow;
//}