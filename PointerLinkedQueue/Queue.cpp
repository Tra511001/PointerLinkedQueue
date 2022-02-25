#include "Queue.h"
#include <iostream>

using namespace std;
Queue::Queue(){
	size = 500;
	frontNode = NULL;
	rearNode = NULL;
}
Queue::Queue(int qSize) {
	size = qSize;
	frontNode = NULL;
	rearNode = NULL;
}
void Queue::makeEmpty() {
	//Post: the queue is empty
	QueNode* temp;
	while (frontNode!= NULL) {
		//the frontNode pointer points to the second node in the line while the first node gets deleted
		temp = frontNode;
		frontNode = frontNode->next;
		delete temp;
	}
	rearNode = NULL;
}

bool Queue::isFull() {
	//Post: returns true if the queue is full otherwise false
	QueNode* newNode;
	try {
		newNode = new QueNode;
		delete newNode;
		return false;
	}
	catch (std::bad_alloc exception) {
		return true;
	}
}
bool Queue::isEmpty() {
	return (frontNode==NULL);
}

void Queue::enQueue(ItemType item) {
	//Pre: Queue has to be initialized
	//Post: new item is at the rear of the queue
	QueNode* temp = new QueNode;
	temp->data = item;

	//if que is empty then new node is both front and rear
	if (rearNode == NULL){
		frontNode = rearNode = temp;
		return;
	}
	rearNode->next = temp;
	rearNode = temp;
}

void Queue::deQueue(ItemType& item)
{
	
}

