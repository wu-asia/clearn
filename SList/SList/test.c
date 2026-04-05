#include"SList.h"

void SListTest01()
{
	SLTNode* node1 = (SLTNode*)malloc(sizeof(SLTNode));
	node1->data = 1;
	SLTNode* node2 = (SLTNode*)malloc(sizeof(SLTNode));
	node2->data = 2;
	node1->next = node2;
	node2->next = NULL;
	SLTNode* plist = node1;
	SLTPrint(plist);


}