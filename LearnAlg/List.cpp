

#include "List.h"
#include "Misc.h"
#include "malloc.h"

void CList::learn_list(void)
{
	ListNode* p_head = nullptr;
	make_list(&p_head, -1);
}
void CList::make_list(ListNode** p_head, int num)
{
	if (num == -1)
	{
		p_head = nullptr;
	}
	else if (num == 0)
	{
		*p_head = nullptr;
	}
	else
	{
		ListNode* p_cur = nullptr;
		for (int i=0; i<num; i++)
		{
			ListNode* p = (ListNode*)calloc(1, sizeof(ListNode));
			if (p == nullptr)
			{
				CMisc::error();
			}
			p->mi_data = i;
			p->mp_next = nullptr;
		}
	}
}