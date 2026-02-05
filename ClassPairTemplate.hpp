#ifndef CLASS_PAIR_TEMPLATE_HPP
#define CLASS_PAIR_TEMPLATE_HPP

#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    // Constructor prototype
    Pair(T1 a, T2 b);

    // print prototype
    void print();
};

// Include implementation
#include "ClassPairTemplate.tpp"

#endif

