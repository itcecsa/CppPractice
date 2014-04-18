//Set has the important property that inserting a new element into a set does not invalidate iterators that 
//point to existing elements. Erasing an element from a set also does not invalidate any iterators, except, 
//of course, for iterators that actually point to the element that is being erased.

#include <set>
#include <iostream>
using namespace std;

void insertIntoSet()
{
	set<int> iset;
	for (int i = 1; i < 10; ++i)
		iset.insert(100 - 3 * i);

	set<int>::const_iterator iter = iset.begin();
	while (iter != iset.end())
	{
		cout << *iter << " ";
		iset.insert((*iter + 1)%100);
		++iter;
	}
}


void UseSet()
{
	insertIntoSet();
}
