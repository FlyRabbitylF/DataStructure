#pragma once

// 判断A与B的大小
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

//数组排序  
void bubble_sort(int *array, int arraySize);

//数组合并
int* merge_array(int *array1, int arraySize1, int *array2, int arraySize2);

