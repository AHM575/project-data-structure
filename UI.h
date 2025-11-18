// UI.h
#ifndef UI_H
#define UI_H
#include "Vehicle.h"
#include "Event.h"
#include "Intersection.h"
#include "Queue.h"

class UI {
public:
    UI();
    ~UI();

    void printQueues(int timestep, Queue<Vehicle*>& EVQueue,
        Queue<Vehicle*>& PTQueue,
        Queue<Vehicle*>& NCQueue,
        Queue<Vehicle*>& FVQueue);

    void printIntersection(int timestep, Intersection* intersection);

    void printSimulationStart();
    void printSimulationEnd();
};

#endif
