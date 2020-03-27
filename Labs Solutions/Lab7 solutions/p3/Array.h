#pragma once

class Array
{
public:
	Array(int length = 10);   // default value 10 not mentioned in problem statement

	bool setValue(int idx, int value);

	int getValue(int idx);

	bool pushBack(int value);

	int pop();

private:
	int * m_arr;
	int m_length;
	int m_stack_counter = 0;
};
