#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#pragma once

typedef int DLDataType;


typedef struct DListNode {
	DLDataType val;
	struct DListNode *next;
	struct DListNode *prev;
}	DListNode;


typedef struct {
	DListNode *head;
}DList;

DListNode* BuyNode(DLDataType val){
	DListNode* node = (DListNode*)malloc(sizeof(DListNode));
	assert(node);
	node->val = val;
	return node;
}
//��ʼ��
void DListInit(DList* dlist){

}

//���
void DListClear(DList* dlist){
	DList* cur, *next;
	for (cur = dlist->head->next; cur != dlist->head; cur = next){
		next = cur->head;
		free(cur);
	}
	dlist->head->next = dlist->head;
	dlist->head->prev = dlist->head;
}
//����
void DListDestroy(DList* dlist){
	DListClear(dlist);
	free(dlist->head);
	dlist->head = NULL;
}

//ͷ��
void DListPushFront(DList* dlist, DLDataType val){
	//�ı��ĸ�ָ��
	DListNode* node = BuyNode(val);
	node->prev = dlist->head;
	node->next = dlist->head->next;
	dlist->head->next->prev = node;
	dlist->head->next = node;
	//DListInsert(dlist->head->next, val);
}

//β��
void DListPushback(DList* dlist, DLDataType val) {
	DListNode* node = BuyNode(val);
	node->prev = dlist->head->prev;
	node->next = dlist->head;
	dlist->head->prev->next = node;
	dlist->head->prev = node;
	//DListInsert(dlist->head);
}

//��pos���ǰ��������
void DListInsert(DListNode* pos, DLDataType val) { 
	DListNode* node = BuyNode(val);
	node->next = pos;
	node->prev = pos->prev;
	pos->prev->next = node;
	pos->prev = node;
}

//��ӡ
void DListPrintByDhead(DList* dlist) {
	for (DListNode* cur = dlist->head->next; cur != dlist->head; cur = cur->next){
		printf("%d-->", cur->val);
	}
}
void DListPrintByDList(DList* dlist) {
	DListPrintByDhead(dlist->head);
}

//����
void find() {

}


//ɾ��pos��㣬pos����ͷ���
void DListErase(DListNode *pos){
	pos->prev->next = pos->next;
	pos->next->prev = pos->prev;
	free(pos);
}

//ͷɾ
void DListPopFront(DList* dlist){
	assert(dlist->head->next != dlist->head);
	DListErase(dlist->head->next);
}

//βɾ
void DListPopBack(DList* dlist){
	assert(dlist->head->next != dlist->head);
	DListErase(dlist->head->prev);
}