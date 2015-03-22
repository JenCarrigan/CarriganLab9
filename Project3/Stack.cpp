#include "Stack.h"
#include <iostream>

/*Stack CPP

Includes implementation for all definitions in Stack.h,
including constructor.
Push - Adds new integer into stack
Peek - gets top integer from stack
Pop - Removes top integer from stack
isEmpty - checks if stack has any elements
*/
intStack::intStack()
{
	top = NULL;
}

void intStack::push(int num)
{
	top = new stackNode(num, top);
}

int intStack::peek()
{
	return top->value;
}

void intStack::pop(int &num)
{
	stackNode *temp;

	if (isEmpty())
		std::cout << "The stack is empty\n";
	else
	{
		num = top->value;
		temp = top;
		top = top->next;
		delete temp;
	}
}

bool intStack::isEmpty() const
{
	if (!top)
		return true;
	else
		return false;
}