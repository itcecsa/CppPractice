
template<class InputIterator, class UnaryFunction>
UnaryFunction for_each(InputIterator first, InputIterator last, UnaryFunction f)
{
	InputIterator iter = first;
	while (iter != last)
	{
		f(iter);
		++iter;
	}
	return f;
}

//give first and last iterator, in the range of [first, last)
//also pass in a functor

//how about reversing list?
