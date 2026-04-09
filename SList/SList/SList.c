#include"SList.h"

void SLTPrint(SLTNode* phead)
{
	SLTNode* pcur = phead;
	while (pcur != NULL)
	{
		printf("%d->", pcur->data);
		pcur = pcur->next;
	}
	printf("NULL\n");
}