#pragma once

typedef struct
{
	int data;
	struct ListNode* next;
}ListNode;

void linkList_AddLast(ListNode* node, int data);

void linkList_AddFirst(ListNode* node, int data);

void linkList_RemoveFirst(ListNode* node);

void linkList_RemoveLast(ListNode* node);

int linkList_GetLast(ListNode* node);

int linkList_GetFirst(ListNode* node);

int linkList_Get(ListNode* node,int index);

int linkList_Size(ListNode* node);