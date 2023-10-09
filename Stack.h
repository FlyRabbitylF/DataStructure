#pragma once
typedef struct StackNode
{
	int data;
	struct StackNode* next;
}StackNode;

StackNode* stack_CreateStack(int data);
int stack_IsStackEmpty(StackNode* stack);
void stack_Push(StackNode* stack, int data);
StackNode* stack_Pop(StackNode* stack);
//void pop(StackNode* stack);
int stack_GetTop(StackNode* stack);
void stack_DestroyStack(StackNode* stack);
void printList(StackNode* list);