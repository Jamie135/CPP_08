#include "MutantStack.hpp"

int	main()
{
	std::cout << std::endl;
	std::cout << "------------------Test MutantStack------------------" << std::endl;
	std::cout << std::endl;
    MutantStack<int> mstack;
    mstack.push(5); //ajoute 5 au top du stack
    mstack.push(17);
    std::cout << mstack.top() << std::endl; //affiche top du stack
    mstack.pop(); //retire l'element au top stack
    std::cout << mstack.size() << std::endl; //affiche taille du stack
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
	// std::cout << "it: " << *it << std::endl;
    ++it;
	// std::cout << "it: " << *it << std::endl;
    --it;
	// std::cout << "it: " << *it << std::endl;
	// std::cout << "ite: " << *ite << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    

    std::cout << std::endl;
	std::cout << "------------------Test List------------------" << std::endl;
	std::cout << std::endl;
    
    std::list<int> l;
    l.push_back(5);
    l.push_back(17);
    std::cout << l.back() << std::endl;
    l.pop_back();
    std::cout << l.size() << std::endl;
    l.push_back(3);
    l.push_back(5);
    l.push_back(737);
    l.push_back(0);
    std::list<int>::iterator it1 = l.begin();
    std::list<int>::iterator ite1 = l.end();
    ++it1;
    --it1;
    while (it1 != ite1)
    {
        std::cout << *it1 << std::endl;
        ++it1;
    }
    return 0;
}