#include"Array.h"

Array::Array(int length) 
	: m_length{ length }
{
	m_arr = new int[length];
}

bool Array::setValue(int idx, int value){
	if (value <= 0 || idx < 0 || idx >= m_length) return 0;
	m_arr[idx] = value;
	return 1;
}

int Array::getValue(int idx){
	if (idx < 0 || idx >= m_length) return -1;
	return m_arr[idx];
}

bool Array::pushBack(int value){
	if (value <= 0 || m_stack_counter == m_length) return 0;
	m_arr[m_stack_counter++] = value;
	return 1;
}

int Array::pop(){
	if (m_stack_counter == 0) return -1;
	return m_arr[--m_stack_counter];
}
