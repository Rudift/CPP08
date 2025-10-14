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

Span::Span(unsigned int N) : _maxsize(N){}

Span::Span(const Span &other){
	*this = other;
}

Span& Span::operator=(const Span &other){
	if (this != &other)
		_maxsize = other._maxsize;
		_numbers = other._numbers;
	return (*this);
}

Span::~Span(){}

void Span::addNumber(unsigned int num){
	if (_numbers.size() == _maxsize)
		throw SpanFull();
}

const char *	Span::SpanFull::what() const throw(){
	return ("The span is full");
}
