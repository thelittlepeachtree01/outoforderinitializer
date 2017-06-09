#include "fuelpump.h"

// Implementation file
// Note the out of order initializer list

FuelPump::FuelPump() : m_ImpellerDiameter(m_Head/2), m_Head(5), m_Viscosity(2.8f)
{

}

float
FuelPump::getFluidViscosity()
{
    return m_Viscosity;
}

int
FuelPump::getHead()
{
    return m_Head;
}

int
FuelPump::getImpellerDiameter()
{
    return m_ImpellerDiameter;
}
