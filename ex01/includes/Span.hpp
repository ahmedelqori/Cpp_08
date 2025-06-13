/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-qori <ael-qori@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 20:38:29 by ael-qori          #+#    #+#             */
/*   Updated: 2025/05/18 20:38:29 by ael-qori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib> 
#include <ctime>   
#include <exception>
class Span
{
    private:
        std::vector<int> container;
        unsigned int N;
        int     min;
        int     max;

    public:
        Span(unsigned int);
        ~Span();
        Span(const Span& other);
        Span& operator=(const Span& other);

        void addNumber(int);
        int shortestSpan();
        int longestSpan();
        void addNumbersFromSelf();
        void printContainer() const;
};

#endif