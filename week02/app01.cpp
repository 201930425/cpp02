#include "invoice.h"
#include "company.h"

int main()
{
	Product product1("��Ź", 210.00);
	Product product2("����", 68.00);

	Invoice invoice(1001, "���ɾ�", "123-456-7890");
	
	invoice.add(1, product1); 
	invoice.add(4, product2); 
	invoice.print();

	return 0;
}