#include "Stack.h"
#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>

StackNode* stack_CreateStack(int data)
{
	StackNode* stack = (StackNode*)malloc(sizeof(StackNode));
	
	if (stack == NULL)
	{
		printf("Create Error!\n");
		return NULL;
	}
	else
	{
		meset(stack, 0, sizeof(StackNode));
		stack->data = data;
		stack->next = NULL;
		return stack;
	}
}
int stack_IsStackEmpty(StackNode* stack)
{
	if (stack == NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void stack_Push(StackNode* stack, int data)
{
	if (isStackEmpty(stack))
	{
		printf("This stack is null!\n");
		return;
	}
	else
	{
		StackNode* head = stack;
		while (head->next != NULL)
		{
			head = head->next;
		}
		StackNode* newNode = (StackNode*)malloc(sizeof(StackNode));
		if (newNode == NULL)
		{
			printf("Create Error!\n");
			return ;
		}
		meset(newNode, 0, sizeof(StackNode));
		newNode->data = data;
		newNode->next = NULL;
		head->next = newNode;
	}
}
StackNode* stack_Pop(StackNode* stack)
{
	if (isStackEmpty(stack))
	{
		printf("This stack is null!\n");
		return NULL;
	}
	else
	{
		StackNode* head = stack;
		if (head->next == NULL)
		{
			free(head);
			return NULL;
		}
		else
		{
			StackNode* nextNode = head->next;
			while (nextNode->next != NULL)
			{
				head = head->next;
				nextNode = head->next;
			}
			free(nextNode);
			head->next = NULL;
			return stack;
		}
	}
}
int stack_GetTop(StackNode* stack)
{
	if (stack == NULL)
	{
		printf("This stack is null!\n");
		return INT_MAX;
	}
	else
	{
		StackNode* head = stack;
		while (head->next != NULL)
		{
			head = head->next;
		}
		return head->data;
	}
}
void stack_DestroyStack(StackNode* stack)
{
	free(stack);
}

void printList(StackNode* list)
{
	if (list == NULL)
	{
		printf("List is null");
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