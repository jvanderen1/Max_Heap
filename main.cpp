#include <iostream>
#include "Heap.hpp"

using namespace std;

int main() {
    Heap myHeap;

    myHeap.insert(1);
    myHeap.insert(6);
    myHeap.insert(2);
    myHeap.insert(9);

    // Printout what's in heap . . .
    cout << "Values: ";
    for (auto& x: myHeap.getHeap())
        cout << x << " ";
    cout << endl;

    // Top of heap . . .
    cout << "Top: " << myHeap.top() << endl;

    // Pop the top value of heap . . .
    myHeap.pop();

    cout << "After pop: ";
    for (auto& x: myHeap.getHeap())
        cout << x << " ";
    cout << endl;

    /**** Round 2 ****/

    myHeap.insert(10);
    myHeap.insert(8);
    myHeap.insert(5);
    myHeap.insert(11);
    myHeap.insert(7);

    // Printout what's in heap . . .
    cout << "Values: ";
    for (auto& x: myHeap.getHeap())
        cout << x << " ";
    cout << endl;

    // Top of heap . . .
    cout << "Top: " << myHeap.top() << endl;

    // Pop the top value of heap . . .
    myHeap.pop();

    cout << "After pop: ";
    for (auto& x: myHeap.getHeap())
        cout << x << " ";
    cout << endl;

    return 0;
}