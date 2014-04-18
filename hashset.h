#include <hash_set>
#include <utility>
#include <vector>
#include <iostream>
using namespace std;

// given an int array and a number
// return all the pairs that sums up to that number
//vector<pair<int, int>>$ FindPairForSum(vector<int> iarray, int sum) /returning reference of local variable is bad
vector<pair<int, int>> FindPairForSum(vector<int>& iarray, int sum)
{
	//hash_set<int> hmap = new hash_set<int>();
	//vector<pair<int, int>> ret = new vector<pair<int, int>>();
	hash_set<int> hmap;
	vector<pair<int, int>> ret;

	for (int i = 0; i < iarray.size(); ++i)
	{
		if (hmap.find(iarray[i]) == hmap.end()) //can't do hamp.contains
			hmap.insert(iarray[i]);
	}

	for (int i = 0; i < iarray.size(); ++i)
	{
		if (hmap.find(sum - iarray[i]) != hmap.end())
		{
			//ret.insert(new pair(iarray[i], sum-iarray[i]));
			ret.push_back(make_pair(iarray[i], sum - iarray[i]));
		}
	}

	//return ret; /returning local variable to reference, which is destructor on func exit!!!
	return ret;
}

void UseHashSet()
{
	//vector<int> array = new vector<int>();
	vector<int> ivec;

	for (int i = 1; i < 11; ++i)
	ivec.push_back(i);

	vector<pair<int, int>> ret = FindPairForSum(ivec, 11);

	vector<pair<int, int>>::const_iterator iter = ret.begin();
	for (; iter != ret.end(); ++iter)
	{
		cout << "<" << iter->first << ", " << iter->second << "> ";
	}
}

void DoSomething(int iarray[])
{
	//get the elements in the array
	//sizeof is used to measure the size in bytes
	//it can be used to calculate any datatype, structs, class
	int size = sizeof(iarray) / sizeof(int);
}
