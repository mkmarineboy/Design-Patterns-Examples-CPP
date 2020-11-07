#ifndef TRUCK_H
#define TRUCK_H

#include "transportation.h"

class Truck : public Transportation
{
public:
    Truck();

    void deliver() override;
};

#endif // TRUCK_H
