/*
Question 3 / 3 (Prime Numbers Less Than N)
Complete the function getNumberOfPrimes which takes in an integer N as its parameter,

to return the number of prime numbers that are less than N

Sample Testcases:
Input #00:
100
Output #00:
25

Input #01:
1000000
Output #01:
78498
*/
#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

int getNumberOfPrimes()
{
	int input, num=1;
	vector<int> primes;
	cin >> input;

	if (input == 2)
		return 1;
	else if (input < 2)
		return -1;

	//vec.push_back(3);
	for (int i = 3; i <= input; i = i + 2)
	{
		int sroot = (int)floor(sqrt(input));
		
		if (primes.size() == 0)
		{
			primes.push_back(i);
			continue;
		}

		int prime = primes[0];
		int index = 0;
		while (prime <= sroot)
		{
			if (i%prime == 0)
				continue;

			prime = primes[++index];
		}
		primes.push_back(i);
	}

	cout << "# of primes less than " << input << " is: " << primes.size() + 1;
}