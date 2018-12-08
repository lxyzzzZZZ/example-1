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
//初始化
void DListInit(DList* dlist){

}

//清空
void DListClear(DList* dlist){
	DList* cur, *next;
	for (cur = dlist->head->next; cur != dlist->head; cur = next){
		next = cur->head;
		free(cur);
	}
	dlist->head->next = dlist->head;
	dlist->head->prev = dlist->head;
}
//销毁
void DListDestroy(DList* dlist){
	DListClear(dlist);
	free(dlist->head);
	dlist->head = NULL;
}

//头插
void DListPushFront(DList* dlist, DLDataType val){
	//改变四个指针
	DListNode* node = BuyNode(val);
	node->prev = dlist->head;
	node->next = dlist->head->next;
	dlist->head->next->prev = node;
	dlist->head->next = node;
	//DListInsert(dlist->head->next, val);
}

//尾插
void DListPushback(DList* dlist, DLDataType val) {
	DListNode* node = BuyNode(val);
	node->prev = dlist->head->prev;
	node->next = dlist->head;
	dlist->head->prev->next = node;
	dlist->head->prev = node;
	//DListInsert(dlist->head);
}

//在pos结点前面作插入
void DListInsert(DListNode* pos, DLDataType val) { 
	DListNode* node = BuyNode(val);
	node->next = pos;
	node->prev = pos->prev;
	pos->prev->next = node;
	pos->prev = node;
}

//打印
void DListPrintByDhead(DList* dlist) {
	for (DListNode* cur = dlist->head->next; cur != dlist->head; cur = cur->next){
		printf("%d-->", cur->val);
	}
}
void DListPrintByDList(DList* dlist) {
	DListPrintByDhead(dlist->head);
}

//查找
void find() {

}


//删除pos结点，pos不是头结点
void DListErase(DListNode *pos){
	pos->prev->next = pos->next;
	pos->next->prev = pos->prev;
	free(pos);
}

//头删
void DListPopFront(DList* dlist){
	assert(dlist->head->next != dlist->head);
	DListErase(dlist->head->next);
}

//尾删
void DListPopBack(DList* dlist){
	assert(dlist->head->next != dlist->head);
	DListErase(dlist->head->prev);
}