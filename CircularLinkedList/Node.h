
//Node class for Linked List implementation.

class Node {

private:

	int data;
	Node* next;
	
public:

	//default ctor
	Node() {
	}

	//setters
	void SetData(int aData) {
		data = aData;
	}

	void SetNext(Node* aNext) {
		next = aNext;
	}

	


	//getters
	int Data() {
		return data;
	}

	Node* Next() {
		return next;
	}


};