#include <iostream>
using namespace std;

template <typename T1, typename T2>
Pair<T1, T2>::Pair(T1 a, T2 b) {
    first = a;
    second = b;
}

template <typename T1, typename T2>
void Pair<T1, T2>::print() {
    cout << "(" << first << ", " << second << ")" << endl;
}

