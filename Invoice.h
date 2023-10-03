// Invoice.h
#pragma once
#include <string>

class Invoice {
public:
    Invoice(const std::string& invoiceId);
    void addServiceCost(double costDollars);
    double getDollarsOwed() const;
    std::string getInvoiceId() const;

private:
    std::string invoiceId;
    double dollarsOwed;
};
