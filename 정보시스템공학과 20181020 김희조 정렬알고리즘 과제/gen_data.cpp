#include "sort_class.h"

#include <cstdlib>
#include <ctime>

void SortClass::GenerateData(int n) {
	int i;

	time_t t1 = time(0);
	srand(t1);

	for (i = 0; i < n; i++)
		org_data[i] = ((1 + rand()) * (1 + rand())) % (10 * n + 1);
}