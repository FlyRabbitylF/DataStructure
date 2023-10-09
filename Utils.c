#include "Utils.h"
#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>

void bubble_sort(int *array, int arraySize) {
    for (int i = 0; i < arraySize - 1; i++)
    {
        int temp=0;
        for (int j = 0; j < arraySize - 1 - i; j++)
        {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }     
    }
}

int* merge_array(int *array1, int arraySize1, int *array2, int arraySize2)
{
    int* newArray = (int*)malloc(sizeof(int) * (arraySize1 + arraySize2));
    if (newArray == NULL)
    {
        printf("New array's creation is failed\n");
        return NULL;
    }
    meset(newArray, 0, sizeof(int) * (arraySize1 + arraySize2));
    for (int i = 0; i < arraySize1; i++)
    {
        newArray[i] = array1[i];
    }
    int index = 0;
    for (int i = arraySize1; i < arraySize2; i++)
    {
        newArray[i] = array2[index];
        index++;
    }
    return newArray;
}
