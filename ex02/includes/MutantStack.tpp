/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-qori <ael-qori@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 23:23:40 by ael-qori          #+#    #+#             */
/*   Updated: 2025/05/19 23:23:40 by ael-qori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(void) : std::stack<T>(){}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const &src) : std::stack<T>(src){}

template <typename T>
MutantStack<T>::~MutantStack(void){}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack const &st)
{
    if (this != &st)
        std::stack<T>::operator=(st);
    return (*this);
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void)
{
    return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void)
{
    return (this->c.end());
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const
{
    return this->c.begin();
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const
{
    return this->c.end();
}

#endif