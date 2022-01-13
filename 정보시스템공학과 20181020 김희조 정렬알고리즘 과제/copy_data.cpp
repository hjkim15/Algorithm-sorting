#include "sort_class.h"

void SortClass::CopyData(int n)
{
	int i;
	 
	for (i = 0; i < n; i++)
		data[i] = org_data[i];

}