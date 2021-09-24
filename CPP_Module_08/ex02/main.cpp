#include "mutantstack.hpp"
#include <iostream>
#include <list>

void	print(MutantStack<int>& stack)//print out MutantStack
{
	MutantStack<int>::iterator it = stack.begin();
	MutantStack<int>::iterator ite = stack.end();
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;
}

void	printlst(std::stack<int, std::list<int> >& stack)//print out stack
{
	std::stack<int, std::list<int> > tmp(stack);//must get copy to pop out every element

	while (!tmp.empty())
	{
		int	num = tmp.top();
		std::cout << num << " ";
		tmp.pop();
	}
	std::cout << std::endl;
}

int		main()
{
	MutantStack<int> mstack;//test contructor

	mstack.push(5);
	mstack.push(17);

	print(mstack);

	std::cout << "Top element: " << mstack.top() << std::endl;

	std::cout << "Remove top element." << std::endl;
	mstack.pop();

	print(mstack);

	std::cout << "Stack size: " << mstack.size() << std::endl;

	std::cout << "Add 3 element." << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...] mstack.push(0);

	std::cout << "Stack size: " << mstack.size() << std::endl;

	print(mstack);

	MutantStack<int> tmpstack(mstack);//test copy constructor
	print(tmpstack);

	MutantStack<int> tmpstack2;
	tmpstack2 = tmpstack;//test assignation reload
	print(tmpstack2);

	std::stack<int> s(mstack);


/*          std::list          */
	std::cout << "/*          std::list          */" << std::endl;

	std::stack<int, std::list<int> >	mstacklst;

	mstacklst.push(5);
	mstacklst.push(17);

	printlst(mstacklst);

	std::cout << "Top element: " << mstacklst.top() << std::endl;

	std::cout << "Remove top element." << std::endl;
	mstacklst.pop();

	printlst(mstacklst);

	std::cout << "Stack size: " << mstacklst.size() << std::endl;

	std::cout << "Add 3 element." << std::endl;
	mstacklst.push(3);
	mstacklst.push(5);
	mstacklst.push(737);
	//[...] mstack.push(0);

	std::cout << "Stack size: " << mstacklst.size() << std::endl;

	printlst(mstacklst);

	std::stack<int, std::list<int> > tmpstacklst(mstacklst);//test copy constructor
	printlst(tmpstacklst);

	std::stack<int, std::list<int> > tmpstacklst2;
	tmpstacklst2 = tmpstacklst;//test assignation reload
	printlst(tmpstacklst2);

/*                             */

	return 0;
}
