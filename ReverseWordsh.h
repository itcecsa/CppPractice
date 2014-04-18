#include <iostream>

using namespace std;

//compile and execute C++ Online
//hello world
string ReverseWords(string words)
{
	cout << "original words: " << words.c_str() << endl;
	size_t length = words.length();
	if (words.empty())
		return words;

	string ret = "";
	int find = 0;
	for (int index = length - 1; index>-1; --index)
	{
		while (words[index] == ' ')
		{
			--index;
		}
	
		find = index - 1;
		//while (words.at(find) != ' ' && find > -1) //find>-1 is totally wrong
		while (find > -1 && words.at(find) != ' ')
		{
			--find;
		}
		ret += words.substr(find + 1, index - find) + (find == -1 ? "" : " ");

		index = find;
	}

	return ret;
}

void TestReverseWords()
{
	cout << "Hello World" << endl;

	string words1 = "";
	cout << "reversed words: " << ReverseWords(words1).c_str() << endl << endl;

	string words2 = "compile and execute   c++ online";
	cout << "reversed words: " << ReverseWords(words2).c_str() << endl << endl;

	string words3 = "a b c d e";
	cout << "reversed words: " << ReverseWords(words3).c_str() << endl << endl;

	string words4 = "compile";
	cout << "reversed words: " << ReverseWords(words4).c_str() << endl << endl;

	string words5 = "compile and execute c++ online";
	cout << "reversed words: " << ReverseWords(words5).c_str() << endl << endl;
}
