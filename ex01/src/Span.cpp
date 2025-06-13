/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-qori <ael-qori@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 20:41:09 by ael-qori          #+#    #+#             */
/*   Updated: 2025/05/18 20:41:09 by ael-qori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"
Span::Span(unsigned int size):N(size) {};
Span::~Span(){}


Span::Span(const Span& other) : container(other.container), N(other.N), min(other.min), max(other.max) {}

Span& Span::operator=(const Span& other) {
    if (this != &other) {
        container = other.container;
        N = other.N;
        min = other.min;
        max = other.max;
    }
    return *this;
}

void Span::addNumber(int n)
{
    if (container.size() >= N) throw std::runtime_error("Span is full");
    if (!container.size()) min = n, max = n;
    else
    {
        if (n < min) min = n;
        if (n > max) max = n;
    }
    container.push_back(n);
}

int Span::shortestSpan()
{
    if (container.size() < 2) throw std::runtime_error("Push More numbers");

    std::vector<int> sorted = container;
    std::sort(sorted.begin(), sorted.end());

    int shortest = sorted[1] - sorted[0];
    for (unsigned int i = 1; i < sorted.size() - 1; ++i) {
        int diff = sorted[i + 1] - sorted[i];
        if (diff < shortest)
            shortest = diff;
    }

    return shortest;
}

int Span::longestSpan()
{
    if (container.size() < 2) throw std::runtime_error("Push More numbers");
    return max - min;
}

void Span::addNumbersFromSelf() {
    if (container.size() >= N) throw std::runtime_error("Span is already full");

    unsigned int spaceLeft = N - container.size();
    std::srand(std::time(0));

    for (unsigned int i = 0; i < spaceLeft; ++i)     addNumber(std::rand() % 10000);
}

void Span::printContainer() const {
    for (unsigned int index = 0; index < container.size(); index++) std::cout << container[index] << " ";
    std::cout << std::endl;
}