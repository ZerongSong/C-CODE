#pragma once
#include"SList.h"

SLNode* CreatNode(SLNDataType x)
{
	SLNode* newnode = (SLNode*)malloc(sizeof(SLNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}

	newnode->va1 = x;
	newnode->next = NULL;
	return newnode;
}

void SLTPrint(SLNode* phead)
{
	SLNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d  ", cur->va1);
		cur = cur->next;
	}

	printf("NULL\n");
}
void SLTFind(SLNode* phead, SLNDataType x)
{
	SLNode* cur = phead;
	while (cur)
	{
		if (cur->va1 == x)
		{
			return cur;
		}
		else
		{
			cur = cur->next;
		}
	}
	return NULL;
}

	

void SLTDestory(SLNode** pphead)
{
	assert(pphead);

	SLNode* cur = *pphead;
	while (cur)
	{
		SLNode* next = cur->next;
		free(cur);
		cur = next;

	}

	*pphead = NULL;

}

void SLTPushBack(SLNode** pphead, SLNDataType x)
{
	SLNode* newnode = CreatNode(x);

	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		SLNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}

		tail->next = newnode;
	}

}
void SLTPushFront(SLNode** pphead, SLNDataType x)
{
	SLNode* newnode = CreatNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}

void SLTPopBack(SLNode** pphead)
{
	assert(*pphead);

	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		SLNode* prev = NULL;
		SLNode* tail = *pphead;
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}

		free(tail);
		tail = NULL;
		prev->next = NULL;
	}

}
void SLTPopFront(SLNode** pphead)
{
	assert(*pphead);

	SLNode* tmp=(*pphead)->next;
	free(*pphead);
	*pphead = tmp;
}
void SLTInsert(SLNode** pphead, SLNode* pos, SLNDataType x)
{
	assert(pphead);
	assert(pos);
	assert(*pphead);

	if (*pphead == pos)
	{
		SLTPushFront(pphead, x);
	}
	else
	{
		SLNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}

		SLNode* newnode = CreatNode(x);
		prev->next = newnode;
		newnode->next = pos;
	}
}
void SLTErase(SLNode** pphead, SLNode* pos)
{
	assert(pphead);
	assert(pos);
	assert(*pphead);

	if (*pphead == pos)
	{
		SLTPopFront(pphead);
	}
	else
	{
		SLNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}

		
		prev->next = pos->next;
		free(pos);
		pos = NULL;
	}
}


void SLTInsertAfter(SLNode* pos, SLNDataType x)
{
	assert(pos);
	SLNode* newnode = CreatNode(x);

	newnode->next = pos->next;
	pos->next = newnode;
}
void SLEarseAfter(SLNode* pos)
{
	assert(pos);
	assert(pos->next);

	SLNode* tmp = pos->next;
	pos->next = pos->next->next;

	free(tmp);
	tmp = NULL;
}

