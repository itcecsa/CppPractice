#include "iostream"
#include <stack>
#include <string>
#include <algorithm>
#include <iterator>
#include <sstream>
#include <stdlib.h>
using namespace std;
// (3 + 5) * (7 – 2) is notated as 3 5 + 7 2 – * in RPN

bool IsOperand(const string& s)
{
	if (s.length() == 1 && (s == "+" || s == "-" || s == "*" || s == "/"))
		return true;
	else
		return false;
}

double Evaluate(double d1, double d2, string operand)
{
	if (operand == "+")
		return d2 + d1;
	else if (operand == "-")
		return d2 - d1;
	else if (operand == "*")
		return d2 * d1;
	else if (operand == "/")
		return d2 / d1;
}

double evaluate(string expression)
{
	stack<double> dstack;
	vector<string> tokens;
	istringstream iss(expression);
	copy(istream_iterator<string>(iss), istream_iterator<string>(), 
		back_inserter<vector<string>> (tokens));

	size_t N = tokens.size();
	for (int i = 0; i < N; ++i)
	{
		if (IsOperand(tokens[i]))
		{
			double d1, d2;
			d1 = dstack.top();
			dstack.pop();
			d2 = dstack.top();
			dstack.pop();

			dstack.push(Evaluate(d1, d2, tokens[i]));
		}
		else
		{
			dstack.push(atof(tokens[i].c_str()));
		}
	}

	return dstack.top();
}

void evaluate()
{
	string exp1 = "5 6 *", exp2 = "3 5 + 7 2 - *";
	cout << "value of exp1 is: " << evaluate(exp1) << endl;

	cout << "value of exp2 is: " << evaluate(exp2) << endl;
}
