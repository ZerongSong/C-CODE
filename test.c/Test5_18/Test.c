#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"SL.h"
#include"SList.h"

void Test()
{
	/*SL A;
	SLInit(&A);
	SLPushBack(&A, 1);
	SLPrint(&A);*/


	SLNode *C=NULL;

	SLTPushBack(&C, 1);
	SLTPushBack(&C, 2);

	SLTPushBack(&C, 3);
	SLTPushBack(&C, 4);

	SLTPushBack(&C, 5);

	SLTPushBack(&C, 6);

	SLTPrint(C);


}

int main(void)
{
	Test();
	return 0;
}