#include "sort_class.h"

void SortClass::HeapCopyData(int n)
{
	int i;

	for (i = 0; i < n; i++)
		data[i + 1] = org_data[i];
}