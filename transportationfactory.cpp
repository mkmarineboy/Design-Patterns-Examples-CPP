#include "transportationfactory.h"

#include "ship.h"
#include "truck.h"

Transportation *TransportationFactory::createTruck()
{
    return new Truck();
}

Transportation *TransportationFactory::createShip()
{
    return new Ship();
}
