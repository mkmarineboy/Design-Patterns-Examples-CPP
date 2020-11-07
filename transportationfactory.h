#ifndef TRANSPORTATIONFACTORY_H
#define TRANSPORTATIONFACTORY_H

class Transportation;
class TransportationFactory
{
public:
    TransportationFactory() = default;
    static Transportation* createTruck();
    static Transportation* createShip();
};

#endif // TRANSPORTATIONFACTORY_H
