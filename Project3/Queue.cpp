#include "Queue.h"
#include <iostream>

/*Queue CPP

Includes implementation for queue including
constructor and destructor.
addBack - Puts new integer into queue at the back
removeFront - Removes the front queue integer
getFront - returns front integer in queue
isEmpty - checks if any elements are in queue
*/
funQueue::funQueue()
{
	front = NULL;
	back = NULL;
}

funQueue::~funQueue()
{
	int value;
	while (!isEmpty())
		removeFront(value);
}

void funQueue::addBack(int num)
{
	Node *temp;
	temp = new Node;
	temp->val = num;
	temp->next = NULL;
	if (back == NULL)
	{
		back = temp;
		front = temp;
	}
	else
	{
		back->next = temp;
		back = temp;
	}
}

void funQueue::removeFront(int &num)
{
	Node *temp;
	if (isEmpty())
		std::cout << "The queue is empty\n";
	else
	{
		num = front->val;
		temp = front;
		front = front->next;
		delete temp;
		if (front == NULL)
			back = NULL;
	}
}

bool funQueue::isEmpty() const
{
	if (front == NULL)
		return true;
	else
		return false;
}

int funQueue::getFront()
{
	return front->val;
}