// UnitTest.h

#include <iostream>
#include "Addition.h"


class UnitTest {
public:
    void runTests() {
        testAddition();
    }

private:
    void testAddition() {
        Addition addition;

        // Test 1: Check if 1 + 2 equals 3
        if (addition.add(1, 2) != 3) {
            std::cout << "Test 1 failed!" << std::endl;
        }

        // Test 2: Check if 0 + 0 equals 0
        if (addition.add(0, 0) != 0) {
            std::cout << "Test 2 failed!" << std::endl;
        }

        // Test 3: Check if negative numbers are added correctly
        if (addition.add(-5, -7) != -12) {
            std::cout << "Test 3 failed!" << std::endl;
        }

        // Add more tests as needed
    }
};
