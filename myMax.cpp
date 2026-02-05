#include <iostream>
using namespace std;

// Function template
template <typename T>
T myMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << myMax(3, 7) << endl;
    cout << myMax(3.5, 2.1) << endl;
    cout << myMax(string("apple"), string("banana")) << endl;
    return 0;
}

