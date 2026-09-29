// Rasha Mohamed 40315095
// Nadine Mazloum 40316810

// testHarnessInvoice.h extrapolated from class notes
#ifndef TESTHARNESS_H_
#define TESTHARNESS_H_

#include <iostream>
#include <string>

inline int testsRun = 0;
inline int testsFailed = 0;

inline void check(const std::string& testName,
                  const std::string& actual,
                  const std::string& expected) { //assertion
    ++testsRun;
    if (actual == expected) {
        std::cout << "[ PASS ] " << testName << "\n";
    } else {
        ++testsFailed;
        std::cout << "[ FAIL ] " << testName << "\n"
                  << "         expected: \"" << expected << "\"\n"
                  << "         actual:   \"" << actual << "\"\n";
    }
}

inline void check(const std::string& testName,
                  const bool actual,
                  const bool expected) {
    ++testsRun;
    if (actual == expected) {
        std::cout << "[ PASS ] " << testName << "\n";
    } else {
        ++testsFailed;
        std::cout << "[ FAIL ] " << testName << "\n"
                  << "         expected: \"" << expected << "\"\n"
                  << "         actual:   \"" << actual << "\"\n";
    }
}


#endif /* TESTHARNESS_H_ */
