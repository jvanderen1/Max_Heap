#include "Heap.hpp"
#include <iostream>

Heap::Heap() {
    nodes.push_back(0); // Unused value in heap . . .
}

std::vector<int> Heap::getHeap() {

    // Makes sure to return every value (except first) . . .
    return std::vector<int> (nodes.begin() + 1, nodes.end());
}

void Heap::insert(int v) {
    bool done = false;
    unsigned long currentLoc = nodes.size();    // New node will be inserted at the size of
                                                // the vector (before insertion) . . .

    nodes.push_back(v);     // Add value to very end of vector . . .

    // Bubble up value, if needed . . .
    while (!done)
    {
        if (currentLoc > 1 &&                               // Not the root node and
            nodes[currentLoc] > nodes[currentLoc / 2])      // Value greater than parent node . . .
        {
            std::swap(nodes[currentLoc], nodes[currentLoc / 2]);
            currentLoc /= 2;
        }

        else
            done = true;
    }
}

int Heap::top() {
    return nodes[1];
}

void Heap::pop() {
    bool done = false;
    unsigned long currentLoc = 1;    // The element being bubbled down will
                                     // be at the root . . .

    std::swap(nodes[currentLoc], nodes.back());     // The first and last heap elements swap . . .
    nodes.pop_back();                               // Remove last element . . .

    while (!done)
    {
        if (2 * currentLoc + 1 < nodes.size() &&            // Possible children location is within the heap and
            (nodes[currentLoc] < nodes[2 * currentLoc] ||   // One of the children is greater . . .
            nodes[currentLoc] < nodes[2 * currentLoc + 1]))
        {
            if (nodes[2 * currentLoc] > nodes[2 * currentLoc + 1])    // Left child is greater than right . . .
            {
                std::swap(nodes[currentLoc], nodes[2 * currentLoc]);
                currentLoc = 2 * currentLoc;
            }

            else    // Right child is greater than left . . .
            {
                std::swap(nodes[currentLoc], nodes[2 * currentLoc + 1]);
                currentLoc = 2 * currentLoc + 1;
            }
        }
        else
            done = true;
    }
}
