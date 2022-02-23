//////////////////////////////////////////////////////////////////////////////
// Source.cpp
//
#include <iostream>
#include "Number.h"

using namespace std;
Number makeNumber (int a, int b)
{
	Number n;
	if (!n.Init(a, b))
		cout << "wrong argument to Init (second)" << endl;
	return n;
}
int main()
{
	Number k;
	k.Init(-8, 8);
	k.Display();
	k.multiply(3);
	k.Display();

	Number m;
	m.Read();
	m.Display();
	m.multiply(4);
	m.Display();

	Number i;
	int c, d;
	cout << "first =  ";
	cin >> c;
	cout << "second = ";
	cin >> d;
	i = makeNumber (c, d);
	i.Display();

	return 0;
}