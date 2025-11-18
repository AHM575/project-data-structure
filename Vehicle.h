#pragma once
using namespace std;

class Vehicle {
public:
    int id;
    int type;
    int arrivalTime;
    int intersection;

    Vehicle();
    Vehicle(int id, int t, int arrival, int inter);

    void print() const;
};
