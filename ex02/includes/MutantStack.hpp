/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-qori <ael-qori@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 21:36:30 by ael-qori          #+#    #+#             */
/*   Updated: 2025/05/18 21:36:30 by ael-qori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack(void);
        MutantStack(MutantStack const &src);
        MutantStack &operator=(MutantStack const &rhs);
        virtual ~MutantStack(void);

        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;

        iterator begin(void);
        iterator end(void);
        const_iterator begin() const;
        const_iterator end() const;
};

#include "MutantStack.tpp"

#endif