

//-------------------------------------------------------------
// 
// Created By Xuekun Guo 2015/9/15 15:55:40
// Copyright (c) 2015/9/15 Xuekun Guo. 
// All rights reserved
// 
// File Descripton:
// ʱ�临�Ӷȣ�nlgn���ռ临�Ӷȣ�n���ȶ�����
//---------------------------------------------------------------

#ifndef _MERGE_SORT_H_
#define _MERGE_SORT_H_

class CMergeSort
{
public:
	static void learn_mergesort(void);

private:
	static void merge(int* a, int* b, int s, int m, int e);
};
#endif