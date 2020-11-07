#include "transportation.h"

#include <algorithm>
#include <iostream>

#define STATIC

std::vector<Transportation*> Transportation::transportations_{};

Transportation::Transportation()
{
    transportations_.push_back(this);
    std::cout << "A new transportation product has been created!\n";
}

Transportation::~Transportation()
{
    if(auto position = std::find(transportations_.begin(), transportations_.end(), this); position != transportations_.end())
    {
        std::cout << "Transportation has been deleted: " << this << "\n";
        transportations_.erase(position);
    }
    else
        std::cerr << "I managed to mess somehow: " << this << " which is impossible!!!!!\n";
}

STATIC int Transportation::totalTransportations()
{
    return transportations_.size();
}
