#include "sort_class.h"

int SortClass::root(heap& H) {
	int keyout;
	//int size = H.heapsize;
	keyout = H.S[1];
	H.S[1] = H.S[H.heapsize];
	H.heapsize = H.heapsize - 1;
	siftDown(H,1);

	return keyout;
}