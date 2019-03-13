#include <iostream>
#include <string>
#include "ArrList.cpp"
using namespace std;

int main()
{
	ArrList<string> s;
	s.insertLast("apple");
	s.insertLast("orange");
	s.insertLast("cherry");
	s.insertLast("pear");
	s.insert("grape", 1);
	s.insert("lemon", 4);
	s.insertLast("kiwi");
	s.delItem(4);
	for (int i = 0; i < s.getCount(); i++)
	{
		cout << s.peek(i) << endl;
	}

	return 0;
}