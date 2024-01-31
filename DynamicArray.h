#pragma once
#include <iostream>
using namespace std;

class DynamicArray
{
	int* ptr; // óêàçàòåëü íà äèíàì. ìàññèâ
	int size;  // ðàçìåð ìàññèâà 
public:
	DynamicArray();
	DynamicArray(int);
	DynamicArray(const DynamicArray&); // copy constructor
	~DynamicArray();
	void Input(); // rand
	void Output(); // âûâîä íà êîíñîëü
	int* GetPointer();
	int GetSize();

	void ReSize(int size); // èçìåíåíèå ðàçìåðà ìàññèâà
	void Sort(); // ñîðòèðîâêà(ëþáîé àëãîðèòì ñîðòèðîâêè)
	int Search(int a); // ïîèñê ýëåìåíòà â ìàññèâå, âîçâðàùàåò èíäåêñ íàéäåííîãî ýëåìåíòà, ëèáî -1.
	void Reverse(); // ïåðåçàïèñûâàåò ïîñëåäîâàòåëüíîñòü ýëåìåíòîâ â îáðàòíîì ïîðÿäêå, íàïðèìåð 12345 -> 54321
};
