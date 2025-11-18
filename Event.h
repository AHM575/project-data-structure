#pragma once
using namespace std;

class Event {
public:
    int time;
    int type;
    int vehicleID;

    Event();
    Event(int t, int tp, int vid);
    void print() const;
};
