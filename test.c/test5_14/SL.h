#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef SLDataType;

typedef struct SeqList
{

	SLDataType* a;

	int size;
	int capacity;

}SL;

void SLInit(SL* ps1);
void SLDestory(SL* ps1);

void SLPrint(SL* ps1);
void SLCheckCapacity(SL* ps1);

void SLPushBack(SL* ps1, SLDataType x);
void SLPushFront(SL* ps1, SLDataType x);

void SLPopBack(SL* ps1);
void SLPopFront(SL* ps1);

void SLInsert(SL* ps1, int pos, SLDataType x);
void SLEarse(SL* ps1, int pos);




