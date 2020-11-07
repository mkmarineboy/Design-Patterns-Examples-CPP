#include "truck.h"
#include <iostream>

Truck::Truck() : Transportation()
{

}

void Truck::deliver()
{
    std::cout << "Delivering with a truck, Highway to hell!\n";
}
