/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-14 11:19:42 by vdeliere          #+#    #+#             */
/*   Updated: 2025-10-14 11:19:42 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#  include <vector>
#  include <list>
#  include <deque>
#  include <iostream>
#  include <algorithm>
#  include <stdexcept>

template <typename T>
typename T::iterator easyfind(T &container, int value);


#  include "easyfind.tpp"//

#endif