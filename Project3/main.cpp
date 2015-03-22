#include "Stack.h"
#include "Queue.h"
#include <iostream>
#include <limits>

/*Main Program

Creates a stack and queue, puts input into the stack
and queue until letter is entered. Then program outputs
top/front of stack/queue and deletes elements from
stack and queue.
*/
int main()
{
	intStack stack;
	funQueue queue;
	int sNum, qNum;

	std::cout << "Let's fill and empty a stack!\n\n";
	std::cout << "Input an integer or q when you would like to quit: ";
	while (std::cin >> sNum)
	{
		stack.push(sNum);
		std::cout << "Input another integer or q when you would like to quit: ";
	}

	std::cout << "\nAt the top of the stack is " << stack.peek() << std::endl;
	std::cout << "Deleting the stack...\n";

	while (!stack.isEmpty())
	{
		stack.pop(sNum);
		std::cout << sNum << std::endl;
		if (stack.isEmpty())
		{
			std::cout << "The stack is now empty!\n\n\n";
			break;
		}
	}

	//MUST do this in order to get rid of \n from stack
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	std::cout << "Now let's fill and empty a queue!\n\n";
	std::cout << "Input an integer or q when you would like to quit: ";
	while (std::cin >> qNum)
	{
		queue.addBack(qNum);
		std::cout << "Input another integer or q when you would like to quit: ";
	}


	std::cout << "\nAt the front of the queue is " << queue.getFront() << std::endl;
	std::cout << "Deleting the queue...\n";

	while (!queue.isEmpty())
	{
		queue.removeFront(qNum);
		std::cout << qNum << std::endl;
		if (queue.isEmpty())
		{
			std::cout << "The queue is now empty!\n";
			break;
		}
	}

	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();

	return 0;
}