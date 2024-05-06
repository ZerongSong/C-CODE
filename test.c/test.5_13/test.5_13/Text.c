#define _CRT_SECURE_NO_WARINGS
#include<stdio.h>
#include"SL.h"

void Test()
{
	SL s1;
	SLInit(&s1);
	SLPushBack(&s1, 1);
	SLPrint(&s1);
	SLPushBack(&s1, 2);
	SLPrint(&s1);

	SLPushBack(&s1, 3);
	SLPrint(&s1);

	SLPushBack(&s1, 4);
	SLPrint(&s1);

	SLPushBack(&s1, 5);
	SLPrint(&s1);

	SLPushBack(&s1, 6);
	SLPrint(&s1);

	SLPushBack(&s1, 7);
	SLPrint(&s1);




}


int main()
{
	Test( );
	return 0;
}