#include "HashMap.h"
#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>


//��Ӽ�ֵ�� β��
void hashMap_Put(HashNode* node, int key, int value)
{
	if (node == NULL)
	{
		printf("This map is null\n");
		return;
	}
	else
	{
		HashNode* newNode = (HashNode*)malloc(sizeof(HashNode));
		if (newNode == NULL)
		{
			printf("New node's creation is failed\n");
			return;
		}
		newNode->key = key;
		newNode->value = value;
		newNode->next = NULL;
		HashNode* head = node;
		while (head->next != NULL)
		{
			head = head->next;
		}
		head->next = newNode;
	}
}
//����key��ȡvalue
int hashMap_Get(HashNode* node, int key)
{
	if (node == NULL)
	{
		printf("This map is null\n");
		return -1;
	}
	else
	{
		HashNode* head = node;
		while (head)
		{
			if (head->key == key)
			{
				return head->value;
			}
			head = head->next;
		}
		printf("This key is not found!\n");
		return -1;
	}
}
//ɾ����ֵ��
void hashMap_Remove(HashNode* node, int key)
{
	if (node == NULL)
	{
		printf("This map is null\n");
		return;
	}
	else
	{
		//error
		HashNode* head = node;
		if (head->key == key)
		{
			node = head->next;
			return;
		}
		else
		{
			HashNode* nextNode = head->next;
			while (nextNode != NULL)
			{
				if (nextNode->key == key)
				{
					head->next = nextNode->next;
					return;
				}
				head = head->next;
				nextNode = nextNode->next;
			}
			printf("This key is not found!\n");
			return;
		}

	}
}
//�Ƿ����key
int hashMap_ContainsKey(HashNode* node, int key)
{
	if (node == NULL)
	{
		printf("This map is null\n");
		return 0;
	}
	else
	{
		HashNode* head = node;
		while (head)
		{
			if (head->key == key)
			{
				return 1;
			}
			head = head->next;
		}
		printf("This key is not found!\n");
		return 0;
	}
}
//�Ƿ����value
int hashMap_ContainsValue(HashNode* node, int value)
{
	if (node == NULL)
	{
		printf("This map is null\n");
		return 0;
	}
	else
	{
		HashNode* head = node;
		while (head)
		{
			if (head->value == value)
			{
				return 1;
			}
			head = head->next;
		}
		printf("This value is not found!\n");
		return 0;
	}
}
//���� hashMap �м�/ֵ�Ե�����
int hashMap_MapSize(HashNode* node)
{
	if (node == NULL)
	{
		return 0;
	}
	else
	{
		int count = 0;
		HashNode* head = node;
		while (head)
		{
			head = head->next;
			count++;
		}
		return count;
	}
}