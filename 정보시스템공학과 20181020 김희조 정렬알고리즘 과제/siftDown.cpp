#include "sort_class.h"

void SortClass::siftDown(heap&H,int i) {
	int parent, largerchild;
	int siftkey;
	bool spotfound;

	siftkey = H.S[i];
	parent = i;
	spotfound = false;

	while ((parent*2) <= H.heapsize && spotfound !=true) {
		if ((parent * 2) < H.heapsize && H.S[parent * 2] < H.S[(parent * 2) + 1])
			largerchild = parent * 2 + 1;
		else
			largerchild = parent * 2;
		if (siftkey < H.S[largerchild]) {
			H.S[parent] = H.S[largerchild];
			parent = largerchild;
		}
		else
			spotfound = true;
	}
	H.S[parent] = siftkey;
}