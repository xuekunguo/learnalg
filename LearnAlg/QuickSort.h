

//-------------------------------------------------------------
// 
// Created By Xuekun Guo 2015/9/15 14:58:16
// Copyright (c) 2015/9/15 Xuekun Guo. 
// All rights reserved
// 
// File Descripton:
// ˼�룺���Σ����Ĳ���partition��
// partitionĿ�꣺ȡ��0����Ϊ�ָ��׼����취��<=�������Ƶ�ǰ�棬>�������Ƶ����档
// partition˼�룺�ȴӺ���ǰ�ҵ���һ��<=����������key�������ٴ�ǰ����ҵ�һ��>��������
// ��key�������������������ظ���ֱ��������
//---------------------------------------------------------------

#ifndef _QUICK_SORT_H_
#define _QUICK_SORT_H_

class CQuickSort
{
public:
	static void learn_quicksort(void);

private:
	static void quick_sort(int* a, const int s, const int e);
	static int partition(int* a, const int s, const int e);
};
#endif