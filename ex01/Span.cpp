/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-14 14:09:42 by vdeliere          #+#    #+#             */
/*   Updated: 2025-10-14 14:09:42 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

//Coplien

Span::Span(unsigned int N) : _maxsize(N){}

Span::Span(const Span &other){
	*this = other;
}

Span& Span::operator=(const Span &other){
	if (this != &other){
		_maxsize = other._maxsize;
		_numbers = other._numbers;
	}
	return (*this);
}

Span::~Span(){}

//Member fonctions

void Span::addNumber(unsigned int num){
	if (_numbers.size() == _maxsize)
		throw std::out_of_range("the span is full");
	_numbers.push_back(num);
}

unsigned int	Span::shortestSpan(){
	if (_numbers.size() < 2)
		throw std::out_of_range("Not enough number to find a span");
	std::vector<int> sorted = _numbers;
	std::sort(sorted.begin(), sorted.end());
	int minDiff = std::numeric_limits<int>::max();
	for (size_t i = 1 ; i < sorted.size(); ++i){
		int diff = sorted[i] - sorted[i - 1];
		if (diff < minDiff)
			minDiff = diff;
	}
	return (minDiff);
}

unsigned int	Span::longestSpan(){
	if (_numbers.size() < 2)
		throw std::out_of_range("Not enough number to find a span");
	int	min = *std::min_element(_numbers.begin(), _numbers.end());
	int	max = *std::max_element(_numbers.begin(), _numbers.end());
	return (max - min);
}

std::vector<int>	Span::getNumbers(){
	return (_numbers);
}
