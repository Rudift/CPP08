/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-14 11:19:24 by vdeliere          #+#    #+#             */
/*   Updated: 2025-10-14 11:19:24 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include "Colors.hpp"

int main(void){
	std::cout << RED + "/======Test with std::vector======/" + RESET << std::endl;
	std::vector<int> vec;
	vec.push_back(0);
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	std::cout << YELLOW + "/------Test 1 : invalid value------/" + RESET << std::endl;
	try{
		std::vector<int>::iterator it = easyfind(vec, 5);
        std::cout << "Found value: " << *it << std::endl;
	}catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << YELLOW + "/------Test 2 : valid value------/" + RESET << std::endl;
	try{
		std::vector<int>::iterator it = easyfind(vec, 2);
        std::cout << "Found value: " << *it << std::endl;
	}catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	std::cout << RED + "\n/======Test with std::list======/" + RESET << std::endl;
	std::list<int> lst;
	lst.push_back(0);
	lst.push_back(1);
	lst.push_back(2);
	lst.push_back(3);
	std::cout << YELLOW + "/------Test 1 : invalid value------/" + RESET << std::endl;
	try{
		std::list<int>::iterator it = easyfind(lst, 5);
        std::cout << "Found value: " << *it << std::endl;
	}catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << YELLOW + "/------Test 2 : valid value------/" + RESET << std::endl;
	try{
		std::list<int>::iterator it = easyfind(lst, 2);
        std::cout << "Found value: " << *it << std::endl;
	}catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	std::cout << RED + "\n/======Test with std::deque======/" + RESET << std::endl;
	std::deque<int> deq;
	deq.push_back(0);
	deq.push_back(1);
	deq.push_back(2);
	deq.push_back(3);
	std::cout << YELLOW + "/------Test 1 : invalid value------/" + RESET << std::endl;
	try{
		std::deque<int>::iterator it = easyfind(deq, 5);
        std::cout << "Found value: " << *it << std::endl;
	}catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << YELLOW + "/------Test 2 : valid value------/" + RESET << std::endl;
	try{
		std::deque<int>::iterator it = easyfind(deq, 2);
        std::cout << "Found value: " << *it << std::endl;
	}catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
}