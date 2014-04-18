#include <iostream>
#include <vector>
using namespace std;

/*
given a integer array, all the elements are in same distance except that one of the elements if missing, find the missing elements
ex. [1 2 4] -> 3
[1 11 31 41 51] -> 21
*/

//very sad, I can't finish 1st question within 45 mins
void test()
{
	cout << "In test" << endl;

	int num;
	cin >> num;

	int i = 0;
	bool finish = false;
	int diff = 0, diff1 = 0, diff2 = 0, n0 = 0, n1 = 0, n2 = 0, in = 0, n = 0;
	vector<int> vec;
	while (i < num)
	{
		cin >> in;
		vec.push_back(in);
		++i;
	}

	i = 0;
	n0 = vec[0];
	n1 = vec[1];
	n=n2 = vec[2];
	diff1 = n1 - n0;
	diff2 = n2 - n1;

	if (diff1 == 2 * diff2)
		{
			cout << n0 + diff2;
			return;
		}
		else if (diff2 == 2 * diff1)
		{
			cout << n1 + diff1;
			return;
		}


	i = 3;
	diff = diff1;
	while (i < num)
	{
		if (vec[i] - n == 2 * diff)
		{
			cout << n + diff;
			return;
		}
		else
		{
			n = vec[i];
		}
		++i;	//should increase here!!!
	}
}


/*
TestCase #0
Status: Passed

TestCase #1 (Hidden)
Status: Failed (Wrong Answer)

TestCase #2 (Hidden)
Status: Failed (Wrong Answer)

TestCase #3 (Hidden)
Status: Failed (Wrong Answer)

TestCase #4 (Hidden)
Status: Failed (Wrong Answer)

TestCase #5 (Hidden)
Status: Failed (Wrong Answer)

TestCase #6 (Hidden)
Status: Failed (Wrong Answer)
*/