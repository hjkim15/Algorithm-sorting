#include "sort_class.h"

void SortClass::PringtSomeElements(int low, int high)
{
	int i, j;

	for (i = low, j = 0; i <= high; i++, j++)
		if ((j + 1) % 5 == 0)
			output_file << data[i] << endl;
		else
			output_file << data[i] << " ";
	output_file << endl;
}