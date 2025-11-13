#include <iostream>
#include "DynamicArray.h"
#include "MyException.h"
#include "MyIndexOutOfBoundException.h"
#include "MyMemoryException.h"
using namespace std;

DynamicArray::DynamicArray()
{
}

DynamicArray::DynamicArray(int size) : size(size)
{	
	try {
		//this->size = size;
		ptr = new int[size];
		cout << "동적배열 생성됨 \n";
		//throw "메모리 오류 발생\n";
		//throw MyException(1000,this);

	}
	catch(...){
		delete[] ptr;
		cout << "힙 메모리 해제(생성자안쪽)\n";

		throw;
	}
}

DynamicArray::~DynamicArray()
{
	cout << "동적배열 메모리 해제 \n";
	delete[] ptr;
}

int DynamicArray::getAt(int index)
{
	if (index >= size || index < 0)
		throw MyMemoryException(4885, this);
	return ptr[index];
}

void DynamicArray::setAt(int index, int value)
{
	if (index >= size || index < 0)
		throw MyIndexOutOfBoundException(4886, this);
	ptr[index] = value;
}
