#include "sort_class.h"

SortClass::SortClass()
{
	cout << "SortClass: constructor" << endl;

	num_data = N_DATA;
	org_data = new int[num_data + 1];
	data = new int[num_data + 1];
	if (org_data == NULL || data == NULL) {
		cout << "No memory" << endl;
		exit(1);
	}
}

SortClass::~SortClass() {
	cout << "SortClass: destructor" << endl;
}