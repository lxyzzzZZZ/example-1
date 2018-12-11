//234.
//
//
//���ж�һ�������Ƿ�Ϊ��������
//
//ʾ�� 1:
//
//���� : 1->2
//��� : false
//	 ʾ�� 2 :
//
// ���� : 1->2->2->1
//  ��� : true
//
//	   /**
//	   * Definition for singly-linked list.
//	   * struct ListNode {
//	   *     int val;
//	   *     struct ListNode *next;
//	   * };
//	   */
//	 struct ListNode* reverse(struct ListNode* head){
//		 if (head == NULL || head->next == NULL){
//			 return head;
//		 }
//		 struct ListNode* newhead = NULL;
//		 while (head){
//			 struct ListNode* ret = head->next;
//			 head->next = newhead;
//			 newhead = head;
//			 head = ret;
//		 }
//		 return newhead;
//	 }
//	 bool isPalindrome(struct ListNode* head) {
//		 if (head == NULL || head->next == NULL){
//			 return true;
//		 }
//		 struct ListNode *fast = head;
//		 struct ListNode *slow = head;
//		 while (fast){
//			 fast = fast->next;
//			 if (fast == NULL){
//				 break;
//			 }
//			 fast = fast->next;
//			 slow = slow->next;
//		 }
//		 slow = reverse(slow);
//		 fast = head;
//		 while (slow && head){
//			 if (fast->val != slow->val){
//				 return false;
//			 }
//			 fast = fast->next;
//			 slow = slow->next;
//		 }
//		 return true;
//	 }
//
//21.
//��������������ϲ�Ϊһ���µ������������ء���������ͨ��ƴ�Ӹ�����������������нڵ���ɵġ�
//
//ʾ����
//
//���룺1->2->4, 1->3->4
//�����1->1->2->3->4->4
//
///**
//* Definition for singly-linked list.
//* struct ListNode {
//*     int val;
//*     struct ListNode *next;
//* };
//*/
//struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
//	struct ListNode * ret;
//	if (l1 == NULL && l2 == NULL){
//		return NULL;
//	}
//	if (l1 == NULL){
//		return l2;
//	}
//	if (l2 == NULL){
//		return l1;
//	}
//	if (l1->val >= l2->val){
//		ret = l2;
//		l2 = l2->next;
//	}
//	else{
//		ret = l1;
//		l1 = l1->next;
//	}
//	struct ListNode * head = ret;
//	while (l1 && l2){
//		if (l1->val <= l2->val){
//			ret->next = l1;
//			ret = ret->next;
//			l1 = l1->next;
//		}
//		else{
//			ret->next = l2;
//			ret = ret->next;
//			l2 = l2->next;
//		}
//	}
//	if (l1 == NULL){
//		ret->next = l2;
//	}
//	else{
//		ret->next = l1;
//	}
//	return head;
//}
//
//83.
//����һ����������ɾ�������ظ���Ԫ�أ�ʹ��ÿ��Ԫ��ֻ����һ�Ρ�
//
//ʾ�� 1:
//
//���� : 1->1->2
//��� : 1->2
//	 ʾ�� 2 :
//
// ���� : 1->1->2->3->3
//  ��� : 1->2->3
//
//	   /**
//	   * Definition for singly-linked list.
//	   * struct ListNode {
//	   *     int val;
//	   *     struct ListNode *next;
//	   * };
//	   */
//	 struct ListNode* deleteDuplicates(struct ListNode* head) {
//		 if (head == NULL || head->next == NULL){
//			 return head;
//		 }
//		 struct ListNode * p1 = head;
//		 struct ListNode * p2 = head->next;
//		 while (p2){
//			 if (p1->val == p2->val){
//				 p1->next = p2->next;
//				 free(p2);
//				 p2 = p1->next;
//			 }
//			 else{
//				 p2 = p2->next;
//				 p1 = p1->next;
//			 }
//		 }
//		 return head;
//	 }