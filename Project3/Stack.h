#include <iostream>

#ifndef Stack_h
#define Stack_h

/*Stack Header

Includes pointer to the top and class stackNode for
traversing the stack. Also includes member definitions.
CITATION: Absolute C++ page 1077.
*/
class intStack
{
private:
	class stackNode
	{
		friend class intStack;
		int value;
		stackNode *next;
		stackNode(int val1, stackNode *next1 = NULL)
		{
			value = val1;
			next = next1;
		}
	};
	stackNode *top;
public:
	intStack();
	void push(int num);
	int peek();
	void pop(int &num);
	bool isEmpty() const;
};

#endif