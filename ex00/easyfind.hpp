#pragma once

# include <iostream>
# include <vector>
# include <iterator>
# include <algorithm>
# include <list>

class NotFoundExeception: public std::exception
{
	public:
		virtual const char *what() const throw()
		{
			return ("Not found");
		}
};

template <typename T>
typename T::iterator	easyfind(T &container, int i)
{
	typename T::iterator	it;
	it = find(container.begin(), container.end(), i);
	if (it == container.end())
		throw (NotFoundExeception());
	return (it);
}