#pragma once
#include<stdio.h>
#include"SL.h"


void Test1()
{
	SL B1;
	SLInit(&B1);
	SLPushBack(&B1, 1);
	SLPrint(&B1);

	SLPushBack(&B1, 2);
	SLPrint(&B1);

	SLPushFront(&B1, 3);
	SLPrint(&B1);

	SLPopBack(&B1);
	SLPrint(&B1);

	SLPopFront(&B1);
	SLPrint(&B1);

	SLInsert(&B1, 1, 2);
	SLPrint(&B1);

	SLEarse(&B1, 0);
	SLPrint(&B1);

	SLDestory(&B1);

	
}

int main()
{

	Test1();
	return 0;
}

