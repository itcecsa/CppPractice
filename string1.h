using namespace std;

//Semantically, a std::string is an actual object; a string.Objects cannot be NULL.Pointers to objects can.
//If you have a pointer, you can check it against NULL, but if you have an actual object, that kind of comparison doesn't apply. 
//(Unless the object's class includes a comparison on integers, which std::string doesn't.)


void test1()
{
	std::string* ptrToString = NULL; // this is a null pointer
	std::string aString = "";        // this is an empty string

	if (ptrToString == NULL)          // check if pointer is null
	{
		
	}

	if (aString == "")                // check if string is empty
	{
		
	}

	if (aString == NULL)              // this doesn't even make sense; you're
	{
		
	}		                        // comparing a string value to an integer
}
