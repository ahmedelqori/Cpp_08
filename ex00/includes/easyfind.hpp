/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-qori <ael-qori@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 20:19:24 by ael-qori          #+#    #+#             */
/*   Updated: 2025/05/18 20:19:24 by ael-qori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <exception>
#include <iterator>

template <typename T> typename T::iterator easyfind(T &container, int value)
{
   typename T::iterator it = container.begin();
    
    while (it != container.end())
    {
        if (*it == value) return it;
        it++;
    }
    
    throw std::runtime_error("404 Not Found");
}

#endif