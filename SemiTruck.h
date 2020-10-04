#pragma once

#include <iostream>
#include <limits>
#include "Vehicle.h"


struct SemiTruck : public Vehicle
{
    SemiTruck(const std::string& n);
    ~SemiTruck() override;
    SemiTruck(const SemiTruck&);
    SemiTruck& operator=(const SemiTruck&);
    
    void driveSlow ( int slowSpeed );
    
    void pullOver();

};
