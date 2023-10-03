// EquivalenceTests.h

#include <iostream>
#include "Addition.h"

class EquivalenceTests {
public:
    void runTests() {
        testPositiveIntegers();
        testNegativeIntegers();
        testZeroes();
        testLargeNumbers();
        testSpecialCases();
        // Add other tests here
    }

private:
    void testPositiveIntegers() {
        Addition addition;
        if (addition.add(5, 10) != 15) {
            std::cout << "Test Positive Integers failed!" << std::endl;
        }
    }

    void testNegativeIntegers() {
        Addition addition;
        if (addition.add(-4, -5) != -9) {
            std::cout << "Test Negative Integers failed!" << std::endl;
        }
    }

    void testZeroes() {
        Addition addition;
        if (addition.add(0, 0) != 0) {
            std::cout << "Test Zeroes failed!" << std::endl;
        }
    }

    void testLargeNumbers() {
        Addition addition;
        if (addition.add(1000, 2000) != 3000) {
            std::cout << "Test Large Numbers failed!" << std::endl;
        }
    }

    void testSpecialCases() {
        Addition addition;
        if (addition.add(1, -1) != 0) {
            std::cout << "Test Special Cases failed!" << std::endl;
        }
    }

    // Add other test functions for different equivalence classes here
};
