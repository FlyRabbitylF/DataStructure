#pragma once

// �����������Ԫ��
int* arrayList_Add(int* array, int arraySize, int data);
// ����������ȡԪ��
int* arrayList_Get(int* array, int arraySize, int index);
// ���������޸�Ԫ��
void arrayList_Set(int* array, int arraySize, int index,int newData);
// ��������ɾ��Ԫ��
void arrayList_Delete(int* array, int arraySize, int index);
// ����
void arrayList_Sort(int* array, int arraySize);
// ���������
int* arrayList_Sum(int* array, int arraySize);
// ������Сֵ
int* arrayList_Min(int* array, int arraySize);
//�������ֵ
int* arrayList_Max(int* array, int arraySize);