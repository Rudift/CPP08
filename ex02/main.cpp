/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-16 09:49:26 by vdeliere          #+#    #+#             */
/*   Updated: 2025-10-16 09:49:26 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include "Colors.hpp"
#include <list>

int main(void){
	std::cout << RED + "\n/===== Test 1 : Basic MutantStack Test =====/" + RESET << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << YELLOW + "\n/===== Test 2 : Comparison with std::list =====/" + RESET << std::endl;
	std::list<int> mylist;
	mylist.push_back(5);
	mylist.push_back(17);
	std::cout << mylist.back() << std::endl;
	mylist.pop_back();
	std::cout << mylist.size() << std::endl;
	mylist.push_back(3);
	mylist.push_back(5);
	mylist.push_back(737);
	mylist.push_back(0);
	std::list<int>::iterator lit = mylist.begin();
	std::list<int>::iterator lite = mylist.end();
	++lit;
	--lit;
	while (lit != lite)
	{
		std::cout << *lit << std::endl;
		++lit;
	}

	std::cout << GREEN + "\n/===== Test 3 : Reverse Iterators Test =====/" + RESET << std::endl;
	MutantStack<int> mstack2;
	for (int i = 1; i <= 5; ++i)
		mstack2.push(i * 10);
	
	std::cout << "Itération normale (begin -> end):" << std::endl;
	for (MutantStack<int>::iterator it = mstack2.begin(); it != mstack2.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;

	std::cout << "Itération reverse (rbegin -> rend):" << std::endl;
	for (MutantStack<int>::reverse_iterator rit = mstack2.rbegin(); rit != mstack2.rend(); ++rit)
		std::cout << *rit << " ";
	std::cout << std::endl;

	std::cout << BLUE + "\n/===== Test 4 : Different Types Test =====/" + RESET << std::endl;
	MutantStack<std::string> stringStack;
	stringStack.push("carotte");
	stringStack.push("lapin");
	stringStack.push("renard");
	stringStack.push("loup");

	std::cout << "String stack contents:" << std::endl;
	for (MutantStack<std::string>::iterator it = stringStack.begin(); it != stringStack.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;

	std::cout << MAGENTA + "\n/===== Test 5 : Copy Constructor Test =====/" + RESET << std::endl;
	MutantStack<int> originalStack;
	for (int i = 1; i <= 3; ++i)
		originalStack.push(i * 100);

	MutantStack<int> copiedStack(originalStack);
	MutantStack<int> assignedStack;
	assignedStack = originalStack;

	std::cout << "Original stack: ";
	for (MutantStack<int>::iterator it = originalStack.begin(); it != originalStack.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;

	std::cout << "Copied stack: ";
	for (MutantStack<int>::iterator it = copiedStack.begin(); it != copiedStack.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;

	std::cout << "Assigned stack: ";
	for (MutantStack<int>::iterator it = assignedStack.begin(); it != assignedStack.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;

	std::cout << CYAN + "\n/===== Test 6 : Const Iterators Test =====/" + RESET << std::endl;
	const MutantStack<int> constStack(originalStack);
	std::cout << "Const stack avec const_iterator: ";
	for (MutantStack<int>::const_iterator cit = constStack.begin(); cit != constStack.end(); ++cit)
		std::cout << *cit << " ";
	std::cout << std::endl;

	std::cout << "Const stack avec const_reverse_iterator: ";
	for (MutantStack<int>::const_reverse_iterator crit = constStack.rbegin(); crit != constStack.rend(); ++crit)
		std::cout << *crit << " ";
	std::cout << std::endl;

	std::cout << BRIGHT_GREEN + "\n/===== Test 7 : Empty Stack Test =====/" + RESET << std::endl;
	MutantStack<int> emptyStack;
	std::cout << "Empty stack size: " << emptyStack.size() << std::endl;
	std::cout << "Empty stack empty?: " << (emptyStack.empty() ? "true" : "false") << std::endl;
	std::cout << "Begin == End for empty stack?: " << (emptyStack.begin() == emptyStack.end() ? "true" : "false") << std::endl;

	return 0;
}