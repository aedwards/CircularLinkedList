
//Testing for the Circular Linked Structure

#include "CLList.h";
#include <iostream>

int main() {
	
	CLList myList;
	
	myList.CLListLength();

	myList.AppendToTail(43);
	myList.AppendToTail(83);
	myList.AppendToTail(98);
	myList.AppendToTail(65);
	myList.AppendToTail(4983);
	myList.AppendToTail(9898);
	myList.AppendToFront(555555);

	cout << "Original List.\n";
	cout << "Original Count: " << myList.CLListLength() << "\n";
	myList.PrintList();


	myList.DeleteTail();		//test for tail deletion
	cout << "\n Number of items after tail deletion : " << myList.CLListLength() << endl;
	myList.PrintList();
	

	myList.DeleteHead();		//test for head node deletion
	cout << "\n Number of items after previous tail deltion + head deletion : " << myList.CLListLength() << endl;
	myList.PrintList();

	

	getchar();
	return 0;
}