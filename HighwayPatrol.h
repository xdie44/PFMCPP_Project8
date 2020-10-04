#pragma once 

#include "Vehicle.h"

struct Highway;
struct Vehicle;

struct HighwayPatrol : Vehicle 
{
    HighwayPatrol();
    ~HighwayPatrol() override;
    HighwayPatrol(const HighwayPatrol&);
    HighwayPatrol& operator=(const HighwayPatrol&);

    void scanHighway(Highway* h);

    void pullOver( Vehicle* v, bool willArrest, Highway* h );

    private:
    std::string vehicleType;
};
