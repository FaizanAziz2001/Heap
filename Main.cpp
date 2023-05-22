#include <vector>
#include <iostream>
#include"Heap.h"
#include"MaxHeap.h"
using namespace std;

int main()
{


	MaxHeap<int> S;
	S.Insert(55);
	S.Insert(155);
	S.Insert(5);
	S.Insert(555);
	S.Insert(755);
	cout << S;

}


