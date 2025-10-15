/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-14 14:07:18 by vdeliere          #+#    #+#             */
/*   Updated: 2025-10-14 14:07:18 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include "Colors.hpp"

int main()
{
	std::cout << RED + "\n=====TEST 1 : main from exercise sheet=====" + RESET << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << RED + "\n=====TEST 2 : fill a too small span with a too large ammount of numbers=====" + RESET << std::endl;
	Span sp2 = Span(5);
	std::vector<int> numbers;
	for (int i = 10; i <= 40; ++i) {
		numbers.push_back(i);
	}
	try {
		sp2.addManyNumbers(numbers.begin(), numbers.end());
	} catch (const std::exception& e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << RED + "\n=====TEST 3 : fill the span with right amount of numbers====" + RESET << std::endl;
	Span sp3 = Span(100);
	std::vector<int> numbers2;
	for (int i = 10; i <= 40; ++i) {
		numbers.push_back(i);
	}
	try {
		sp3.addManyNumbers(numbers2.begin(), numbers2.end());
	} catch (const std::exception& e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << GREEN + "Success !" + RESET << std::endl;

	std::cout << RED + "\n=====TEST 4 : adding with add number the drop who spill the bottle====" + RESET << std::endl;
	try{
		sp.addNumber(42);
	}catch (const std::exception& e){
		std::cout << "Exception caught: " << e.what() << "\n" << std::endl;
	}
	return (0);
}