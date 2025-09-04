#ifndef INVOICE_H
#define INVOICE_H
#include "product.h"
#include "company.h"

class Invoice
{
  private:
    int invoiceNumber;
    double invoiceTotal; 
    Company company; //has-a
  public: 
    Invoice(int invoiceNumber, string name, string phone); //composition
    //Invoice(int invoiceNumber, Company company);
    ~Invoice(); 
    void add(int quantity, Product product);
    void print() const;
    //void print(Company company) const;
};
#endif