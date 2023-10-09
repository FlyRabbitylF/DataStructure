#include "LinkList.h"
#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>

void linkList_AddLast(ListNode* node, int data)
{
	if (node == NULL)
	{
		printf("This list is null\n");
		return ;
	}
	ListNode* newNode = (ListNode*)mallco(sizeof(ListNode));
	if (newNode == NULL)
	{
		printf("New node's creation is failed\n");
		return;
	}
	else
	{
		newNode->data = data;
		newNode->next = NULL;
		ListNode* head = node;
		while (head->next != NULL)
		{
			head = head->next;
		}
		head->next = newNode;
	}
}

void linkList_AddFirst(ListNode* node, int data)
{
	if (node == NULL)
	{
		printf("This list is null\n");
		return;
	}
	ListNode* newNode = (ListNode*)mallco(sizeof(ListNode));
	if (newNode == NULL)
	{
		printf("New node's creation is failed\n");
		return;
	}
	else
	{
		newNode->data = data;
		newNode->next = node;
		node = newNode;
	}
}

void linkList_RemoveFirst(ListNode* node)
{
	if (node == NULL)
	{
		printf("This list is null\n");
		return;
	}
	ListNode* removeNode = node;
	node = node->next;
	free(removeNode);
}

void linkList_RemoveLast(ListNode* node)
{
	if (node == NULL)
	{
		printf("This list is null\n");
		return;
	}
	ListNode* head = node;
	ListNode* removeNode = head->next;
	while (removeNode->next != NULL)
	{
		head = head->next;
		removeNode = removeNode->next;
	}
	head->next = NULL;
	free(removeNode);

}

int linkList_GetLast(ListNode* node)
{
	if (node == NULL)
	{
		printf("This list is null\n");
		return;
	}
	ListNode* head = node;
	while (head->next != NULL)
	{
		head = head->next;
	}
	return head->data;
}

int linkList_GetFirst(ListNode* node)
{
	if (node == NULL)
	{
		printf("This list is null\n");
		return;
	}
	return node->data;
}

int linkList_Get(ListNode* node, int index)
{
	if (node == NULL)
	{
		printf("This list is null\n");
		return INT_MAX;
	}
	ListNode* indexNode = node;
	for (int i = 0; i < index; i++)
	{
		if (indexNode->next != NULL)
		{
			indexNode = indexNode->next;
		}
		else
		{
			return INT_MAX;
		}
	}
	return indexNode->data;
}

int linkList_Size(ListNode* node)
{
	if (node == NULL)
	{
		printf("This list is null\n");
		return 0;
	}
	else
	{
		ListNode* head = node;
		int count = 1;
		while (head->next != NULL)
		{
			head = head->next;
			count++;
		}
		return count;
	}
}

