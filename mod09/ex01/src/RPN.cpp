/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 15:13:53 by jyriarte          #+#    #+#             */
/*   Updated: 2025/06/25 17:00:16 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <list>

static bool isOperator(char c);
static long long betterPop(std::stack<long long, std::list<long long> > &stack);
static long long operate(long long x, long long y, char op);

RPN::RPN(void)
{
}

RPN::RPN(const RPN &other)
{
    (void)other;
}

RPN::~RPN(void)
{
}

RPN &RPN::operator=(const RPN &other)
{
    (void)other;
    return (*this);
}

void RPN::solve(const std::string &expr)
{
    std::stack<long long, std::list<long long> > stack;
    char c;
    long long x;
    long long y;
    size_t i = 0;

    for (; i < expr.size(); i++)
    {
        c = expr[i];

        if (c == ' ')
            continue;

        if (std::isdigit(c))
            stack.push(c - '0');
        else if (stack.size() >= 2 && isOperator(c))
        {
            y = betterPop(stack);
            x = betterPop(stack);
            if (c == '/' && y == 0)
                break;
            stack.push(operate(x, y, c));
        }
        else
            break;
    }

    if (stack.size() != 1 || i != expr.size())
    {
        std::cerr << "Error" << std::endl;
        exit(1);
    }
    std::cout << betterPop(stack) << std::endl;
}

static long long betterPop(std::stack<long long, std::list<long long> > &stack)
{
    long long n = stack.top();
    stack.pop();
    return (n);
}

static long long operate(long long x, long long y, char op)
{
    switch (op)
    {
    case '+':
        return (x + y);
    case '-':
        return (x - y);
    case '*':
        return (x * y);
    default:
        return (x / y);
    }
}

static bool isOperator(char c)
{
    switch (c)
    {
    case '+':
    case '-':
    case '*':
    case '/':
        return (true);
    default:
        return (false);
    }
}
