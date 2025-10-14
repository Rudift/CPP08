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

class Span{
	private:
		unsigned int 		_maxsize;
		std::vector<int>	_numbers;
	public:
		Span(unsigned int N);
		Span(const Span &other);
		Span& operator=(const Span &other);
		~Span();

		void addNumber(unsigned int num);
		
		class SpanFull : public std::exception{
			const char* what() const throw();
		}

};

#endif