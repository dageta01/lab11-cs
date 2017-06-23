#include "Cylinder.h"
#include <math.h>

#define PI 3.14

Cylinder::Cylinder()
{
    radius = 1;
    height = 1;
}

Cylinder::Cylinder(double r, double h)
{
    radius = r;
    height = h;
}

double Cylinder::getSurfaceArea()
{
    return 2*PI*radius*height + 2*PI*radius*radius;
}

double Cylinder::getVolume()
{
    return PI * radius * radius * height;
}
