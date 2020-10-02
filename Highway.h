#pragma once

#include <vector>
#include <algorithm>

#include "Vehicle.h"

struct HighwayPatrol;
struct Vehicle;

struct Highway
{
    void changeSpeed(int newSpeed);
    void addVehicle(Vehicle* v);
    void removeVehicle(Vehicle* v);
private:
    void addVehicleInternal(Vehicle* v);
    void removeVehicleInternal(Vehicle* v);
    int speedLimit = 65;
    std::vector<Vehicle*> vehicles;

    friend HighwayPatrol;
};
