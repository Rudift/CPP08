/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-14 14:07:44 by vdeliere          #+#    #+#             */
/*   Updated: 2025-10-14 14:07:44 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <algorithm>
#include <stdexcept>
#include <limits>
#include <iostream>

class Span{
	private:
		unsigned int 		_maxsize;
		std::vector<int>	_numbers;
	public:
		Span(unsigned int N);
		Span(const Span &other);
		Span& operator=(const Span &other);
		~Span();

		void			addNumber(unsigned int num);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();

		template<typename Iterator>
		void	addManyNumbers(Iterator begin, Iterator end){
			if ((_numbers.size() + std::distance(begin, end)) > _maxsize)
				throw std::out_of_range("Range of interators too large")
			_numbers.insert(_numbers.end(), begin, end);
		}
		
};

#endif