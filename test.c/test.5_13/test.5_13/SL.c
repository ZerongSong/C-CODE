#define _CRT_SECURE_NO_WARNINGS
#include"SL.h"

void SLInit(SL* ps1)
{
	assert(ps1);

	ps1->a = NULL;
	ps1->size = 0;
	ps1->capacity = 0;

}

void SLPrint(SL* ps1)
{
	assert(ps1);

	for (int i = 0; i < ps1->size; i++)
	{
		printf("%d", ps1->a[i]);

	}

	printf("\n");
}

void SLDestory(SL* ps1)
{
	assert(ps1);

	if (ps1->a != NULL)
	{
		free(ps1->a);
		ps1->a = NULL;
		ps1->size = 0;
		ps1->capacity = 0;
	}
}

void SLCheckCapacity(SL* ps1)
{
	assert(ps1);

	if (ps1->size == ps1->capacity)
	{
		int newCapacity = ps1->capacity == 0 ? 4 : ps1->capacity * 2;
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
