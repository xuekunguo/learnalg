
#include "Misc.h"
#include <iostream>
using namespace std;

void CMisc::dump(int* a, int n)
{
	for (int i=0; i<n; i++)
	{
		cout<<a[i]<<endl;
	}
	cout<<"**************"<<endl;
}
void CMisc::error(void)
{
	cout<<"error"<<endl;
	getchar();
	getchar();
}