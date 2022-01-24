#pragma once
#include<iostream>
template<class T>
class Stack {
	T* arr;
	size_t size;
	size_t capacity;
public:
	Stack(size_t size);
	~Stack() { delete[] arr; }
	void push(const T& number);
	void print();
	void pop();
	bool isEmpty();
};

template <class T>
Stack<T>::Stack(size_t userCap)
{
	size = 0;
	capacity = userCap;
	arr = new int[userCap];
}

template <class T>
bool Stack<T>::isEmpty() {
	return size;
}

template <class T>
void Stack<T>::push(const T& number) {
	if (size == capacity)
	{
		capacity *= 2;
		int* mArr = new int[capacity];
		for (int i = 0; i < capacity - 1; i++)
			mArr[i] = arr[i];
		delete[] arr;
		arr = mArr;
	}
	arr[size] = number;
	size++;
}

template <class T>
void Stack<T>::pop() {
	size--;
}
template <class T>
void Stack<T>::print() {
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << " ";
}
