#include "ArrayList.h"
#include "Utils.h"
#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>

int* arrayList_Add(int* array, int arraySize, int data)
{
	if (array == NULL)
	{
		printf("Array is null\n");
		return NULL;
	}
	int* newArray = (int*)mallco(sizeof(arraySize + 1));
	if (newArray == NULL)
	{
		printf("New array's creation is failed\n");
		return array;
	}
	meset(newArray, 0, sizeof(arraySize + 1));
	for (int i = 0; i < arraySize; i++)
	{
		newArray[i] = array[i];
	}
	newArray[arraySize] = data;
	return *newArray;
}

int* arrayList_Get(int* array, int arraySize, int index)
{
	if (array == NULL)
	{
		printf("Array is null\n");
		return INT_MAX;
	}
	if (index > arraySize-1)
	{
		printf("Out of range\n");
		return INT_MAX;
	}
	return array[index];
}

void arrayList_Set(int* array, int arraySize, int index, int newData)
{
	if (array == NULL)
	{
		printf("Array is null\n");
		return ;
	}
	if (index > arraySize - 1)
	{
		printf("Out of range\n");
		return ;
	}
	array[index]=newData;
}

void arrayList_Delete(int* array, int arraySize, int index)
{
	if (array == NULL)
	{
		printf("Array is null\n");
		return;
	}
	if (index > arraySize - 1)
	{
		printf("Out of range\n");
		return;
	}
}

void arrayList_Sort(int* array, int arraySize)
{
	if (array == NULL)
	{
		printf("Array is null\n");
		return;
	}
	bubble_sort(array, arraySize);
}

int* arrayList_Sum(int* array, int arraySize)
{
	if (array == NULL)
	{
		printf("Array is null\n");
		return;
	}
	int sum = 0;
	for (int i = 0; i < arraySize; i++)
	{
		sum += array[i];
	}
	return sum;
}

int* arrayList_Min(int* array, int arraySize)
{
	int min = INT_MAX;
	if (array == NULL)
	{
		printf("Array is null\n");
		return INT_MAX;
	}
	for (int i = 0; i < arraySize; i++)
	{
		min = MIN(array[i], min);
	}
	return min;
}

int* arrayList_Max(int* array, int arraySize)
{
	int max = INT_MIN;
	if (array == NULL)
	{
		printf("Array is null\n");
		return INT_MIN;
	}
	for (int i = 0; i < arraySize; i++)
	{
		max = MAX(array[i], max);
	}
	return max;
}
