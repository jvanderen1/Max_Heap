#ifndef MAX_HEAP_HEAP_HPP
#define MAX_HEAP_HEAP_HPP

#include <vector>

class Heap {
private:
    std::vector<int> nodes;
public:
    Heap();     // Constructor

    std::vector<int> getHeap();
    void insert(int v);
    int top();
    void pop();
};


#endif //MAX_HEAP_HEAP_HPP
