#ifndef PUMP_H
#define PUMP_H

// Abstract class representing a pump
class Pump
{
public:
    virtual float getFluidViscosity() = 0;
    virtual int getHead() = 0;
    virtual int getImpellerDiameter() = 0;

};

#endif // PUMP_H
