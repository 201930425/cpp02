#include "MyException.h"


MyException::MyException(int errorCode, const char* errorMessage, DynamicArray* errorAddress):
	errorCode(errorCode), errorMessage(errorMessage), errorAddress(errorAddress)
{
	//cout << "예외 객체 생성\n";
}
