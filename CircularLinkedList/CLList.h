//Circular Linked List class implemetation
#include <iostream>
using namespace std;

#include "Node.h"

class CLList {

	Node *head;

public:

	CLList() {
		head = NULL;
	}

	//get the length of the list
	int CLListLength() {
		Node* currentNode = head;
		int count = 0;

		if(head == NULL) {
			cout << "List is empty." << endl;
			return 0;
		}
		else {
			/* This initial count++ incrementation outside of the while loop accounts for the fact that, 
			the terminating condition of the while loop will cause the loop to exit before a count of the
			last node is made, showing us a count of n-1.  And since a list that has items bypasses the
			first test of an empty list, we can always count on there being at least one item in the list to count.*/
			count++;
			while(currentNode->Next() != head) {
				currentNode = currentNode->Next();
				count++;
			}
			return count;
		}
		
	}

	//Print the contents of the list
	void PrintList() {
		Node* currentNode = head;

		if(head == NULL) {
			cout << "No items in list to print." << endl;
			return;
		}

		while(currentNode->Next() != head) {
			cout << currentNode->Data();
			cout << " --> ";
			currentNode = currentNode->Next();
		}
		cout << currentNode->Data();	//prints the last element because the while loop will always exclude the end element. This is common of circular lists.
	}

	//append new data to end of list
	void AppendToFront(int data) {
		
		Node* newNode = new Node();
		newNode->SetData(data);

		//if the list is empty
		if(head == NULL) {
			newNode->SetNext(newNode);
			head = newNode;
			//cout << head->Data();
			return;
		}

		//logic for if the list already has elements in it
		Node* currentNode = head;
		while(currentNode->Next() != head) {
			currentNode = currentNode->Next();
		}

		if(head != NULL) {
			newNode->SetNext(head);
			currentNode->SetNext(newNode);
			head = newNode;
		}

	}


	//Append data to beginning of list
	void AppendToTail(int data) {

		Node* newNode = new Node();
		newNode->SetData(data);

		//if the list is empty
		if(head == NULL) {
			newNode->SetNext(newNode);
			head = newNode;
			//cout << head->Data();
			return;
		}

		//logic for if the list already has elements in it
		Node* currentNode = head;
		while(currentNode->Next() != head) {
			currentNode = currentNode->Next();
		}

		currentNode->SetNext(newNode);
		newNode->SetNext(head);
		//cout << newNode->Data();
	}





};