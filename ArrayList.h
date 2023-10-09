#pragma once

// 向数组中添加元素
int* arrayList_Add(int* array, int arraySize, int data);
// 根据索引获取元素
int* arrayList_Get(int* array, int arraySize, int index);
// 根据索引修改元素
void arrayList_Set(int* array, int arraySize, int index,int newData);
// 根据索引删除元素
void arrayList_Delete(int* array, int arraySize, int index);
// 排序
void arrayList_Sort(int* array, int arraySize);
// 计算数组和
int* arrayList_Sum(int* array, int arraySize);
// 数组最小值
int* arrayList_Min(int* array, int arraySize);
//数组最大值
int* arrayList_Max(int* array, int arraySize);