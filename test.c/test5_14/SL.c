#pragma once
#include"SL.h"

void SLInit(SL* ps1)
{
	assert(ps1);
	ps1->a = NULL;
	ps1->capacity = 0;
	ps1->size = 0;

}
void SLDestory(SL* ps1)
{
	assert(ps1);

	if (ps1->a != NULL)

	free(ps1->a);
	ps1->a = NULL;
	int size = 0;
	int capacity = 0;

}

void SLPrint(SL* ps1)
{
	assert(ps1);

	for (int i = 0; i < ps1->size; i++)
	{
		printf("%d  ", ps1->a[i]);
	}
	
	printf("\n");

}
void SLCheckCapacity(SL* ps1)
{
	assert(ps1);

	if (ps1->size == ps1->capacity)
	{
		int newCapacity = ps1->size == 0 ? 4 : ps1->capacity * 2;
		SLDataType* tmp = (SLDataType*)realloc(ps1->a, sizeof(SLDataType) * newCapacity);
	
		if (tmp == NULL)
		{
			perror("realloc fail");
			return;
		}

		ps1->a = tmp;
		ps1->capacity = newCapacity;
	}

}

void SLPushBack(SL* ps1, SLDataType x)
{
	assert(ps1);

	SLCheckCapacity(ps1);

	ps1->a[ps1->size] = x;
	ps1->size++;
}
void SLPushFront(SL* ps1, SLDataType x)
{
	assert(ps1);

	SLCheckCapacity(ps1);

	int end = ps1->size - 1;
	while (end >= 0)
	{
		//挪动数据
		ps1->a[end + 1] = ps1->a[end];
		--end;
	}
		ps1->a[0] = x;
		ps1->size++;
	
}

void SLPopBack(SL* ps1)
{
	assert(ps1);

	assert(ps1->size > 0);

	ps1->size--;
}
void SLPopFront(SL* ps1)
{
	assert(ps1);

	assert(ps1->size > 0);

	int begin = 1;
	while (begin < ps1->size)
	{
		ps1->a[begin - 1] = ps1->a[begin];
		++begin;
	}

	ps1->size--;
}

void SLInsert(SL* ps1, int pos, SLDataType x)
{
	assert(ps1);
	assert(pos >= 0 && pos <= ps1->size);

	SLCheckCapacity(ps1);

	int end = ps1->size - 1;
	while (end >= pos)
	{
		ps1->a[end + 1] = ps1->a[end];
		--end;
	}
	ps1->a[pos] = x;
	ps1->size++;

}
void SLEarse(SL* ps1, int pos)
{
	assert(ps1);

	assert(pos >= 0 && pos < ps1->size);

	//挪动覆盖
	int begin = pos + 1;
	while (begin < ps1->size)
	{
		ps1->a[begin - 1] = ps1->a[begin];
		++begin;
	}

	ps1->size--;


}


