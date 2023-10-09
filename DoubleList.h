#pragma once
typedef struct
{
	int data;
	struct Node* last;
	struct Node* next;
}Node;

Node* doubleList_CreateList(int data);
Node* doubleList_AddNode(int data, Node* node);
Node* doubleList_DeleteNode(int data, Node* node);
void doubleList_UpdateNode(int data, Node* node);
Node* doubleList_SearchNode(int data, Node* node);
void printNode(Node* list);