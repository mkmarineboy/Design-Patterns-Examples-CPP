#include "ship.h"
#include <iostream>

Ship::Ship(): Transportation()
{

}

void Ship::deliver()
{
    std::cout << "Delivering with a Ship, Yelkenler FORA!\n";
}
