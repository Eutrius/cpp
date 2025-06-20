/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 15:13:53 by jyriarte          #+#    #+#             */
/*   Updated: 2025/06/21 16:06:39 by jyriarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

static bool isOperator(char c);
static int betterPop(std::stack<int> &stack);
static int operate(int x, int y, char op);

RPN::RPN(void)
{
}

RPN::RPN(const RPN &other)
{
	(void) other;
}

RPN::~RPN(void)
{
}

RPN &RPN::operator=(const RPN &other)
{
	(void) other;
	return (*this);
}

void RPN::solve(const std::string &expr)
{
	std::stack<int> stack;
	char c;
	int x;
	int y;
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

static int betterPop(std::stack<int> &stack)
{
	int n = stack.top();
	stack.pop();
	return (n);
}

static int operate(int x, int y, char op)
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
