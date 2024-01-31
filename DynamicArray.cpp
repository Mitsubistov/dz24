#include "DynamicArray.h"
#include <algorithm>

DynamicArray::DynamicArray() : ptr(nullptr), size(0) {}

DynamicArray::DynamicArray(int S)
{
	cout << "Construct by 1 param\n";
	size = S;
	ptr = new int[S];
}

DynamicArray::DynamicArray(const DynamicArray& a) // copy constructor
{
	cout << "Copy construct\n";
	size = a.size;
	ptr = new int[size];
	for (int i = 0; i < size; i++)
	{
		ptr[i] = a.ptr[i];
	}
}

DynamicArray::~DynamicArray()
{
	cout << "Destruct\n";
	if (ptr != 0)
	{
		delete[] ptr;
	}
}

void DynamicArray::Input()
{
	for (int i = 0; i < size; i++)
	{
		ptr[i] = rand() % 20;
	}
}

void DynamicArray::Output()
{
	for (int i = 0; i < size; i++)
	{
		cout << ptr[i] << "\t";
	}
	cout << "\n---------------------------------\n";
}

int* DynamicArray::GetPointer()
{
	return ptr;
}

int DynamicArray::GetSize()
{
	return size;
}

void DynamicArray::ReSize(int newSize)
{
	if (newSize <= 0) {
		cerr << "Invalid size\n";
		return;
	}

	int* newPtr = new int[newSize];
	int copySize = min(size, newSize);

	for (int i = 0; i < copySize; i++)
	{
		newPtr[i] = ptr[i];
	}

	delete[] ptr;
	ptr = newPtr;
	size = newSize;
}

void DynamicArray::Sort()
{
	sort(ptr, ptr + size);
}

int DynamicArray::Search(int value)
{
	for (int i = 0; i < size; i++)
	{
		if (ptr[i] == value)
			return i;
	}

	return -1;
}

void DynamicArray::Reverse()
{
	int start = 0;
	int end = size - 1;

	while (start < end)
	{
		swap(ptr[start], ptr[end]);
		start++;
		end--;
	}
}
