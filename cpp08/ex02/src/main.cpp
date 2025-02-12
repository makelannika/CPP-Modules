#include "MutantStack.hpp"

#include <iostream>
#include <list>

template<typename T>
void    printStack(T& container)
{
	std::cout << "using iterators: ";
    for (auto it = container.begin(); it != container.end(); ++it) {
        std::cout << *it;
        std::cout << (it == std::prev(container.end()) ? "\n" : ",");
    }
	std::cout << "using reverse iterators: ";
    for (auto it = container.rbegin(); it != container.rend(); ++it) {
        std::cout << *it;
        std::cout << (it == std::prev(container.rend()) ? "\n" : ",");
    }
	std::cout << "\n";
}

template<typename T>
void    printStack(const T& container)
{
	std::cout << "using const iterators: ";
    for (auto it = container.cbegin(); it != container.cend(); ++it) {
        std::cout << *it;
        std::cout << (it == std::prev(container.cend()) ? "\n" : ",");
    }
	std::cout << "using const reverse iterators: ";
    for (auto it = container.crbegin(); it != container.crend(); ++it) {
        std::cout << *it;
        std::cout << (it == std::prev(container.crend()) ? "\n" : ",");
    }
	std::cout << "\n";
}

int main()
{
    std::cout << "=========== MUTANT STACK ===========\n";
    MutantStack<int>    stack;

	std::cout << "Pushing elements to stack... \n";
    for (int i = 0; i < 10; i++)
        stack.push(i);

    std::cout << "size: " << stack.size() << "\n";
    std::cout << "top: " << stack.top() << "\n\n";

    const MutantStack<int>	stack2(stack);
    MutantStack<int>    	stack3;

    stack3 = stack2;

    std::cout << "PRINTING STACK\n";
    printStack(stack);

    std::cout << "PRINTING COPY CONSTRUCTED STACK\n";
	printStack(stack2);

    std::cout << "PRINTING COPY ASSIGNED STACK\n";
    printStack(stack3);

	std::cout << "Popping all elements in the stack... \n";
    while (!stack.empty())
        stack.pop();

    std::cout << "size: " << stack.size() << "\n";

    std::cout << "\n=============== LIST ===============\n";

    std::list<int>  list;

	std::cout << "Pushing elements to list... \n";
    for (int i = 0; i < 10; i++)
        list.push_back(i);

    std::cout << "size: " << list.size() << "\n";
    std::cout << "top: " << list.back() << "\n\n";

    std::cout << "PRINTING LIST\n";
	printStack(list);

    const std::list<int>	list2(list);
    std::list<int>    		list3;

    list3 = list2;

    std::cout << "PRINTING COPY CONSTRUCTED LIST\n";
    printStack(list2);
    std::cout << "PRINTING COPY ASSIGNED LIST\n";
    printStack(list3);

	std::cout << "Popping all elements in the list... \n";
    while (!list.empty())
        list.pop_back();

    std::cout << "size: " << list.size() << "\n";
}
