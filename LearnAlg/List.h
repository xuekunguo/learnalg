

//-------------------------------------------------------------
// 
// Created By Xuekun Guo 2015/9/24 20:15:27
// Copyright (c) 2015/9/24 Xuekun Guo. 
// All rights reserved
// 
// File Descripton:
// 
//---------------------------------------------------------------

#ifndef _LIST_H_
#define _LIST_H_

struct ListNode
{
	int mi_data;
	ListNode* mp_next;
};

class CList
{
public:
	static void learn_list(void);

private:
	static void make_list(ListNode** p_head, int num);
};

#endif
