#ifndef TRANSPORTATION_H
#define TRANSPORTATION_H

#include <vector>

class Transportation
{
public:
    Transportation();
    virtual ~Transportation();
    virtual void deliver() = 0;

    static int totalTransportations();

private:
    static std::vector<Transportation*> transportations_;
};

#endif // TRANSPORTATION_H
