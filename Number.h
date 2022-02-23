//////////////////////////////////////////////////////////////////////////////
// Number2.h
//
#pragma once
class Number
{
private:
	int first;
	unsigned int second;

public:
	int getFirst() const 
	{ 
		return first; 
	}
	unsigned int getSecond() const 
	{
		return second;
	}

	void setFirst(int value);
	void setSecond(unsigned int value);

	bool Init(int a, int b);
	void Display() const;
	void Read();

	void multiply(int N);
};

