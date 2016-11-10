
#include "QuickSort.h"
#include <utility>
#include <iostream>
using namespace std;

void CQuickSort::learn_quicksort(void)
{
	int a[] = {2, 8, 7, 1, 3, 5, 6, 4};
	quick_sort(a, 0, 7);

	for (int i=0; i<8; i++)
	{
		cout<<a[i]<<endl;
	}
}

void CQuickSort::quick_sort(int* a, const int s, const int e)
{
	if (s < e)
	{
		int q = partition(a, s, e);
		quick_sort(a, s, q-1);
		quick_sort(a, q+1, e);
	}
}
int CQuickSort::partition(int* a, const int s, const int e)
{
	int key = a[s];
	int i = s, j = e;
	while (i < j)
	{
		while ((i<j)&&(a[j]>key))
		{
			j--;
		}
		if (i<j)
		{
			a[i++] = a[j];
		}

		while ((i<j)&&(a[i]<=key))
		{
			i++;
		}
		if (i<j)
		{
			a[j--] = a[i];
		}
	}
	// while�˳�ʱi==j�������ڲ�����һ�������i/j��ָ������һ��Ԫ�أ�
	// �����ƶ�������λ�ã����԰�key����������λ������ȷ��
	a[i] = key;
	return i;
}