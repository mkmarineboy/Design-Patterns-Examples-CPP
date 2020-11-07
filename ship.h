#ifndef SHIP_H
#define SHIP_H

#include "transportation.h"

class Ship : public Transportation
{
public:
    Ship();

    void deliver() override;
};

#endif // SHIP_H
