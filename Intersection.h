#pragma once
using namespace std;

class Intersection {
public:
    int id;
    bool blockedLanes[4];

    Intersection();
    Intersection(int id);
    void blockLane(int lane);
    void print() const;
};
