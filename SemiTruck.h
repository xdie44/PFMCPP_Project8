#pragma once

#include <iostream>
#include <limits>
#include "Vehicle.h"


struct SemiTruck : public Vehicle
{
    SemiTruck(const std::string& n);
    
    void driveSlow ( int slowSpeed );
    
    void pullOver();

};
