#include "SemiTruck.h"

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) {}
SemiTruck::~SemiTruck() = default;
SemiTruck::SemiTruck(const SemiTruck&) = default;
SemiTruck& SemiTruck::operator=(const SemiTruck&) = default;

void SemiTruck::driveSlow ( int slowSpeed )
{
    setSpeed( slowSpeed );
    std::cout << name << " is driving slow" << std::endl;
}
void SemiTruck::pullOver()
{
    std::cout << name << " pulled over." << std::endl;
    setSpeed(0);
}
