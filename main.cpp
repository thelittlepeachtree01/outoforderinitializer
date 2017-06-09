#include <iostream>
#include "fuelpump.h"

// Driver program

using namespace std;

int main()
{
    FuelPump p;

    cout << "Viscosity is " << p.getFluidViscosity() << endl;
    cout << "Head is " << p.getHead() << endl;
    cout << "Impeller diameter is " << p.getImpellerDiameter() << endl;

    return 0;
}
