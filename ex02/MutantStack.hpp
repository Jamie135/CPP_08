#pragma once

# include <iostream>
# include <stack>
# include <list>
# include <iterator>

template< typename T >
class MutantStack : public std::stack<T>
{
    public:

        typedef typename std::stack<T>::container_type::iterator    iterator;
        MutantStack()
        {
			// std::cout << "Default Constructor called" << std::endl;
        }

        MutantStack(MutantStack const &copy)
        {
			// std::cout << "Copy Constructor called" << std::endl;
            *this = copy;
        }

        MutantStack  &operator=(MutantStack const &src)
        {
			*this = src;
            return (*this);
        }

        ~MutantStack()
        {
			// std::cout << "Deconstuctor called" << std::endl;
        }

        iterator    begin()
        {
            return (this->c.begin());
        }

        iterator    end()
        {
            return (this->c.end());
        }
};
