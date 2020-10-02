#pragma once 

#include "Vehicle.h"

struct Highway;
struct Vehicle;

struct HighwayPatrol : Vehicle 
{
    HighwayPatrol();
    virtual ~HighwayPatrol() = default;
    HighwayPatrol(const HighwayPatrol&) = default;
    HighwayPatrol& operator=(const HighwayPatrol&) = default;

    void scanHighway(Highway* h);

    void pullOver( Vehicle* v, bool willArrest, Highway* h );

    private:
    std::string vehicleType;
};
