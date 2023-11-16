#include "Span.hpp"

int main()
{
	std::cout << "---------- Project Test ----------" << std::endl << std::endl;
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "---------- My Test ----------" << std::endl;
	{
		Span a = Span(5);
		for (size_t i = 0; i < 6; i++)
		{
			try
			{
				a.addNumber(i);
			}
			catch (std::exception &e)
			{
				std::cerr << std::endl << e.what() << std::endl;
			}
		}
		std::cout << "shortest span is " << a.shortestSpan() << std::endl;
		std::cout << "longest span is " << a.longestSpan() << std::endl;
	}
	std::cout << std::endl;
	{
		Span a = Span(10000);
		a.addNumber(10000, time(NULL));
		std::cout << "shortest span is " << a.shortestSpan() << std::endl;
		std::cout << "longest span is " << a.longestSpan() << std::endl << std::endl;
	}
	return (0);
}
