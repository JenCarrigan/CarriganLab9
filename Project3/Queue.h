#include <iostream>

#ifndef Queue_h
#define Queue_h

/*Queue header

Node struct has object info for linked
queue. Class funQueue includes pointers
to front and back of queue, as well as
member functions.
*/
struct Node
{
	int val;
	Node *next;
};

class funQueue
{
private:
	Node *front, *back;
public:
	funQueue();
	~funQueue();
	void addBack(int);
	void removeFront(int &);
	int getFront();
	bool isEmpty() const;
};

#endif