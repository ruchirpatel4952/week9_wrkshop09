// InvoiceTest.h
#pragma once
#include <iostream>
#include "Invoice.h"

class InvoiceTest {
public:
    void runTests() {
        testAddServiceCost();
        testGetDollarsOwed();
        testGetInvoiceId();
        // Add other test methods here
    }

private:
    void testAddServiceCost() {
        Invoice invoice("ABCD");
        invoice.addServiceCost(10);
        if (invoice.getDollarsOwed() != 10) {
            std::cout << "Test AddServiceCost failed!" << std::endl;
        }
    }

    void testGetDollarsOwed() {
        Invoice invoice("EFGH");
        invoice.addServiceCost(5);
        invoice.addServiceCost(7);
        if (invoice.getDollarsOwed() != 12) {
            std::cout << "Test GetDollarsOwed failed!" << std::endl;
        }
    }

    void testGetInvoiceId() {
        Invoice invoice("IJKL");
        if (invoice.getInvoiceId() != "IJKL") {
            std::cout << "Test GetInvoiceId failed!" << std::endl;
        }
    }

    // Add other test functions here
};
