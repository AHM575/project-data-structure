#pragma once
using namespace std;

class Queue {
public:
    Queue();
    bool enqueue(void* data);
    void* dequeue();
    bool isEmpty() const;
    void print() const;
};
