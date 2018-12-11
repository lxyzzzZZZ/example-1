//234.
//
//
//请判断一个链表是否为回文链表。
//
//示例 1:
//
//输入 : 1->2
//输出 : false
//	 示例 2 :
//
// 输入 : 1->2->2->1
//  输出 : true
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
//将两个有序链表合并为一个新的有序链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。
//
//示例：
//
//输入：1->2->4, 1->3->4
//输出：1->1->2->3->4->4
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
//给定一个排序链表，删除所有重复的元素，使得每个元素只出现一次。
//
//示例 1:
//
//输入 : 1->1->2
//输出 : 1->2
//	 示例 2 :
//
// 输入 : 1->1->2->3->3
//  输出 : 1->2->3
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