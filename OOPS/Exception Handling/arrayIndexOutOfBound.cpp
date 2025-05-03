#include <iostream>
using namespace std;

/*
    Array Index Out of Bounds:
    - Accessing an array with an invalid index (less than 0 or greater than array size - 1) is an error.
    - In C++, array indices are not automatically checked, so you must handle these errors manually.
    
    Example:
    - This program attempts to access an array element using an invalid index, and we handle the exception.
*/

int accessArrayElement(int arr[], int size, int index) {
    if (index < 0 || index >= size) {
        throw out_of_range("Error: Array index out of bounds!");
    }
    return arr[index];
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int index;

    cout << "Enter the index to access: ";
    cin >> index;

    try {
        int result = accessArrayElement(arr, size, index);
        cout << "Element at index " << index << ": " << result << endl;
    } catch (const out_of_range& e) {
        cout << "Caught exception: " << e.what() << endl;
    }

    return 0;
}
