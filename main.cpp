#include <iostream>
#include <memory>

#include "transportation.h"
#include "transportationfactory.h"

int main()
{
    std::unique_ptr<Transportation> truckProduct{TransportationFactory::createTruck()};
    std::unique_ptr<Transportation> shipProduct{TransportationFactory::createShip()};

    std::cout << "Total transportations: " << Transportation::totalTransportations() << "\n";

    truckProduct->deliver();
    shipProduct->deliver();

    return 0;
}
