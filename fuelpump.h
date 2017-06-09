#ifndef FUELPUMP_H
#define FUELPUMP_H

#include <pump.h>

/** Class declaration for FuelPump, implementing a Pump
 ** Rudimentary pump characteristics for demonstration purporses
**/

class FuelPump : public Pump
{
public:
    FuelPump();
    float getFluidViscosity();
    int getHead();
    int getImpellerDiameter();

protected:
    float m_Viscosity;
    int m_Head;
    int m_ImpellerDiameter;

};

#endif // FUELPUMP_H
