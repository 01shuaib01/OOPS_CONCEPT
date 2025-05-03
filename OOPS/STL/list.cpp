#include <iostream>
#include <list>

using namespace std;

/*
    Lists in STL:
    - A list is a doubly linked list that allows fast insertion and deletion at both ends.
    - Lists support functions like push_front(), push_back(), pop_front(), pop_back(), insert(), erase(), and remove().
*/

void displayList(const list<int>& lst) {
    cout << "List elements: ";
    for (int val : lst) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    list<int> lst;

    // Adding elements to the list
    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(30);
    lst.push_front(5);

    // Displaying the list
    displayList(lst);

    // Inserting an element at the second position
    auto it = lst.begin();
    advance(it, 1);
    lst.insert(it, 15);
    cout << "After inserting 15 at index 1: ";
    displayList(lst);

    // Removing an element by value
    lst.remove(20);
    cout << "After removing element with value 20: ";
    displayList(lst);

    // Erasing the second element
    it = lst.begin();
    advance(it, 1);
    lst.erase(it);
    cout << "After erasing second element: ";
    displayList(lst);

    // Clearing the list
    lst.clear();
    cout << "After clearing the list, size: " << lst.size() << endl;

    return 0;
}
