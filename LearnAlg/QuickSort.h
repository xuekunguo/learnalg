

//-------------------------------------------------------------
// 
// Created By Xuekun Guo 2015/9/15 14:58:16
// Copyright (c) 2015/9/15 Xuekun Guo. 
// All rights reserved
// 
// File Descripton:
// 思想：分治；核心步骤partition。
// partition目标：取第0个数为分割基准，想办法把<=它的数移到前面，>它的数移到后面。
// partition思想：先从后向前找到第一个<=它的数，与key互换；再从前向后找第一个>它的数，
// 与key互换。以上两步不换重复，直到结束。
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