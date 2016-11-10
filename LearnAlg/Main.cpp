#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool jump(const int D, const int cur_A_idx, const int cur_pos, const vector<int>& A, int& time)
{
	int near_pos = cur_pos - 1;
	int far_pos = cur_pos - D;
	bool ok = false;
	for (int i=0; i<cur_A_idx; i++)
	{
		if ((A[i]>=far_pos)&&(A[i]<=near_pos))
		{
			time += i;
			jump(D, i, A[i], A, time);
			ok = true;
			break;
		}
	}

	return ok;
}
int main(void)
{
	int t[] = {1, 3, 1, 4, 2, 5};
	vector<int> A(t,t+6);
	int D = 3, X = 7, time = 0;


	jump(D, A.size(), X, A, time);

	getchar();
	getchar();
	return 0;
}
/*
#include <iostream>
// #include <string>
#include <vector>
#include <algorithm>
#include <utility>
// #include <numeric>
using namespace std;

bool tran(const int ap, const int aq, const int ar)
{
	return (((ap+aq)>ar)&&((ap+ar)>aq)&&((aq+ar)>ap));
}
int prem(const int ap, const int aq, const int ar)
{
	return (ap+aq+ar);
}
pair<int, int> range(const int a, const int b)
{
	return make_pair(a+b, abs(a-b));
}
bool tri(const int a2, const int a1, const int a0)
{
	return ((a1+a0>a2)&&(abs(a1-a0)<a2));
}
int main(void)
{
	int t[] = {5, 10, 18, 7, 8, 3};
	vector<int> A(t,t+6);
// 	int t[] = {10, 20, 30};
// 	vector<int> A(t,t+3);

	sort(A.begin(), A.end());
	int min_per = 100000001;
	for (int i=2; i<A.size(); i++)
	{
		for (int j=1; j<i; j++)
		{
			for (int k=0; k<j; k++)
			{
				if (tri(A[i], A[j], A[k]))
				{
					cout<<A[i]+A[j]+A[k]<<endl;
					getchar();
// 					return (A[i]+A[j]+A[k]);
				}
			}
		}
	}

// 	cout<<((min_per==100000001)?-1:min_per)<<endl;
// 	return ((min_prem==100000001)?-1:min_prem);

	cout<<"press any key to continue..."<<endl;
	getchar();
	getchar();
	return 0;
}
*/

/*
int main()
{
	// 	int t[] = {5, 10, 18, 7, 8, 3};
	// 	vector<int> A(t,t+6);
	int t[] = {10, 20, 30};
	vector<int> A(t,t+3);

	int min_prem = 100000001; //numeric_limits<int>::max();
	for (unsigned int i=0; i<A.size(); i++)
	{
		for (unsigned int j=i+1; j<A.size(); j++)
		{
			for (unsigned int k=j+1; k<A.size(); k++)
			{
				if (tran(A[i], A[j], A[k]))
				{
					min_prem = std::min(min_prem, prem(A[i], A[j], A[k]));
				}
			}
		}
	}

	cout<<((min_prem==100000001)?-1:min_prem)<<endl;
	// 	return ((min_prem==100000001)?-1:min_prem);

	cout<<"press any key to continue..."<<endl;
	getchar();
	getchar();
	return 0;
}*/



// #include <iostream>
// #include <string>
// using namespace std;
// 
// // #include "QuickSort.h"
// // #include "MergeSort.h"
// // #include "Misc.h"
// 
// int main()
// {
// // 	CQuickSort::learn_quicksort();
// // 	CMergeSort::learn_mergesort();
// 	char p[] = "hello";
// 	cout<<sizeof(p)<<endl;                                                                                                                                                                                                                                                                                                                                                                                                     
// 
// 	cout<<"press any key to continue..."<<endl;
// 	getchar();
// 	getchar();
// 	return 0;
// }