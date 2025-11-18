#pragma once
using namespace std;

class PriorityQueue {
public:
    PriorityQueue();
    bool insert(void* data, int priority);
    void* removeMin();
    bool isEmpty() const;
    void print() const;
};
