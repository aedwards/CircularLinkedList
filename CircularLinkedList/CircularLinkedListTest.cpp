
//Testing for the Circular Linked Structure

#include "CLList.h";
#include <iostream>

int main() {
	
	CLList myList;
	
	myList.AppendToTail(43);
	myList.AppendToTail(4983);
	myList.AppendToTail(98);
	myList.AppendToTail(43);
	myList.AppendToTail(4983);
	myList.AppendToTail(9898);
	myList.AppendToFront(555555);
	
	myList.PrintList();

	int listCount = myList.CLListLength();
	cout << "\n\n\n Number of items in circular list: " << listCount << endl;

	getchar();
	return 0;
}