#pragma once
#include "Vehicle.h"
#include "Event.h"
using namespace std;

class FileLoader {
public:
    FileLoader();
    bool load(const char* filename);
};
