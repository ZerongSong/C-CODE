#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLNDataType;

typedef struct SListNode
{
	SLNDataType va1;
	struct SListNode* next;

}SLNode;

void SLTPrint(SLNode* phead);
void SLTFind(SLNode* phead,SLNDataType x);
void SLTDestory(SLNode** phead);

void SLTPushBack(SLNode** pphead,SLNDataType x);
void SLTPushFront(SLNode** pphead, SLNDataType x);

void SLTPopBack(SLNode** pphead);
void SLTPopFront(SLNode** pphead);

void SLTInsert(SLNode** pphead, SLNode* pos, SLNDataType x);
void SLTErase(SLNode** pphead, SLNode* pos);

void SLTInsertAfter(SLNode* pos, SLNDataType x);
void SLEarseAfter(SLNode* pos);


