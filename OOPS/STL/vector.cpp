#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
    Vectors in STL:
    - A vector is a dynamic array that can grow or shrink in size.
    - Operations such as push_back(), pop_back(), accessing elements, and more are supported.
    - Vectors also support functions like insert(), erase(), resize(), and clear().
*/

void displayVector(const vector<int>& vec) {
    cout << "Vector elements: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> vec;

    // Adding elements to the vector
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);

    // Display the vector
    displayVector(vec);

    // Inserting an element at the second position
    vec.insert(vec.begin() + 1, 15);
    cout << "After inserting 15 at index 1: ";
    displayVector(vec);

    // Erasing the third element
    vec.erase(vec.begin() + 2);
    cout << "After erasing the element at index 2: ";
    displayVector(vec);

    // Resizing the vector to a smaller size
    vec.resize(3);
    cout << "After resizing to 3 elements: ";
    displayVector(vec);

    // Clearing the vector
    vec.clear();
    cout << "After clearing the vector, size: " << vec.size() << endl;

    return 0;
}
