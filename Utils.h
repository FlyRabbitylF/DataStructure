#pragma once

// �ж�A��B�Ĵ�С
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

//��������  
void bubble_sort(int *array, int arraySize);

//����ϲ�
int* merge_array(int *array1, int arraySize1, int *array2, int arraySize2);

