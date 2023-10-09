#include "DoubleList.h"
#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>

Node* doubleList_CreateList(int data)
{
	Node* head = (Node*)malloc(sizeof(Node));
	if (head == NULL)
	{
		printf("Create Error");
		return NULL;
	}
	head->data = data;
	head->next = NULL;
	head->last = NULL;
	return head;
}
Node* doubleList_AddNode(int data, Node* node)
{
	if (node == NULL)
	{
		Node* head = createList(data);
		return head;
	}
	else
	{
		Node* head = node;
		while (head->next != NULL)
		{
			head = head->next;
		}
		Node* newNode = (Node*)malloc(sizeof(Node));
		if (newNode == NULL)
		{
			printf("Create Error");
			return NULL;
		}
		newNode->data = data;
		newNode->last = head;
		newNode->next = NULL;
		head->next = newNode;
		return node;
	}
}

Node* doubleList_DeleteNode(int data, Node* node)
{
	if (node == NULL)
	{
		printf("This list is null");
		return;
	}
	else
	{
		Node* head = node;
		if (head->data == data)
		{
			Node* returnNode = head->next;
			returnNode->last = NULL;
			return returnNode;
		}
		else
		{
			Node* deleteNode = head->next;
			while (deleteNode)
			{
				if (deleteNode->data = data)
				{
					Node* nextNode = deleteNode->next;
					head->next = deleteNode->next;
					nextNode->last = head;
					return node;
				}
				head = head->next;
				deleteNode = deleteNode->next;
			}
			printf("This node is not found!\n");
			return node;
		}
	}
}

void doubleList_UpdateNode(int data, Node* node)
{
	if (node == NULL)
	{
		printf("This list is null");
		return;
	}
	else
	{
		Node* updateNode = searchNode(data, node);
		if (updateNode)
		{
			updateNode->data = data;
		}
		else
		{
			return;
		}
	}
}

Node* doubleList_SearchNode(int data, Node* node)
{
	if (node == NULL)
	{
		printf("This list is null\n");
		return NULL;
	}
	else
	{
		Node* searchNode = node;
		while (searchNode)
		{
			if (searchNode->data == data)
			{
				return searchNode;
			}
			searchNode = searchNode->next;
		}
		printf("This node is not found!\n");
		return NULL;
	}
}

void printNode(Node* list)
{
	if (list == NULL)
	{
		printf("This list is null!\n");
		return;
	}
	else
	{
		while (list)
		{
			printf("%d ", list->data);
			list = list->next;
		}
	}
}