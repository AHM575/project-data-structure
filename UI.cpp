// UI.cpp
#include "UI.h"
#include <iostream>
using namespace std;

UI::UI() {}
UI::~UI() {}

void UI::printQueues(int timestep, Queue<Vehicle*>& EVQueue,
    Queue<Vehicle*>& PTQueue,
    Queue<Vehicle*>& NCQueue,
    Queue<Vehicle*>& FVQueue) {
}

void UI::printIntersection(int timestep, Intersection* intersection) {}

void UI::printSimulationStart() {}
void UI::printSimulationEnd() {}
