#include "MutantStack.hpp"

#include <iostream>
#include <list>

void    printStack(MutantStack<int>& stack)
{
    for (auto it = stack.begin(); it != stack.end(); ++it) {
        std::cout << *it;
        std::cout << (it == std::prev(stack.end()) ? "\n" : ",");
    }
}

void    printStack(const MutantStack<int>& stack)
{
    for (auto it = stack.begin(); it != stack.end(); ++it) {
        std::cout << *it;
        std::cout << (it == std::prev(stack.end()) ? "\n" : ",");
    }
}

void    printList(std::list<int>& list)
{
    for (auto it = list.begin(); it != list.end(); ++it) {
        std::cout << *it;
        std::cout << (it == std::prev(list.end()) ? "\n" : ",");
    }
}

int main()
{
    std::cout << "====== MUTANT STACK ======\n";
    MutantStack<int>    stack;

    for (int i = 0; i < 10; i++)
        stack.push(i);

    std::cout << "size: " << stack.size() << "\n";
    std::cout << "top: " << stack.top() << "\n\n";

    std::cout << "stack: ";
    printStack(stack);

    const MutantStack<int>	stack2(stack);
    MutantStack<int>    	stack3;

    stack3 = stack2;

    std::cout << "\nconst copy constructed stack: ";
	printStack(stack2);

    std::cout << "copy assigned stack: ";
    printStack(stack3);

    while (!stack.empty())
        stack.pop();

    std::cout << "\nsize: " << stack.size() << "\n";

    std::cout << "\n========== LIST ==========\n";

    std::list<int>  list;

    for (int i = 0; i < 10; i++)
        list.push_back(i);

    std::cout << "size: " << list.size() << "\n";
    std::cout << "top: " << list.back() << "\n\n";

    std::cout << "list: ";
    printList(list);

    std::list<int>    list2;
    std::list<int>    list3(list);

    list2 = list3;

    std::cout << "\ncopy constructed list: ";
    printList(list2);
    std::cout << "copy assigned list: ";
    printList(list3);

    while (!list.empty())
        list.pop_back();

    std::cout << "\nsize: " << list.size() << "\n";
}
