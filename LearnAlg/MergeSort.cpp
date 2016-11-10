
#include "MergeSort.h"

#include "Misc.h"

void CMergeSort::learn_mergesort(void)
{
	int a[] = {2, 7, 8, 10, 3, 4, 6, 9};
	int b[8];

	merge(a, b, 0, 4, 8);
	CMisc::dump(a, 8);
	CMisc::dump(b, 8);
}
void CMergeSort::merge(int* a, int* b, int s, int m, int e)
{
	int i = s, j = m, k = s;
	while ((i<m) && (j<e))
	{
		if (a[i] < a[j])
		{
			b[k++] = a[i++];
		}
		else
		{
			b[k++] = a[j++];
		}
	}
	while (i < m)
	{
		b[k++] = a[i++];
	}
	while (j < e)
	{
		b[k++] = a[j++];
	}

	for (int i=s; i<e; i++)
	{
		a[i] = b[i];
	}
}