//����һ������ͷ��� head �ķǿյ���������������м��㡣
//
//����������м��㣬�򷵻صڶ����м��㡣
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


//˫����ѭ��
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