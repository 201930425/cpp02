/**************************************************************
 * Product 클래스의 구현 파일                                 *
 **************************************************************/
#include "product.h"

// 생성자
Product::Product(string name, double unitPrice)
: name(name), unitPrice(unitPrice)
{
}
// 소멸자
Product::~Product()
{
} 
// getPrice 멤버 함수
double Product::getPrice() const
{
  return unitPrice;
}