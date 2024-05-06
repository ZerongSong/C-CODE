#pragma once
#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLDataType;

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

