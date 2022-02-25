#pragma once
#include "ItemType.h"
#define QUEUE_H
struct QueNode {
	//QueNode();
	ItemType data;
	QueNode* next;
};

class Queue {
	Queue();
	Queue(int x);
	void makeEmpty();
	//POST:return false if it isn't full and true if it is
	bool isFull();
	//POST: return true/false based on if the queue is empty
	bool isEmpty();
	//POST:adds an item to the back of the queue
	void enQueue(ItemType newItem);
	//POST:takes away the item thats next in queue
	void deQueue(ItemType& item);
private:
	QueNode* frontNode;
	QueNode* rearNode;
	int size = 0;
};