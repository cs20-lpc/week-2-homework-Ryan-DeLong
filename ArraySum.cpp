#include <iostream>
using namespace std;

template <typename T>
T arraySum(T arr[], int size) {
    T sum = T();   // initializes to 0 / 0.0 / empty

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    int arr1[] = {1, 2, 3, 4};
    double arr2[] = {1.1, 2.2, 3.3};

    cout << "Sum of int array: " << arraySum(arr1, 4) << endl;
    cout << "Sum of double array: " << arraySum(arr2, 3) << endl;

    return 0;
}

