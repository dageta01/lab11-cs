#include "Cone.h"
#include <math.h>

#define PI 3.14
Cone::Cone()
{
    radius = 1;
    height = 1;
}

Cone::Cone(double r, double h)
{
    radius = r;
    height = h;
}

double Cone::getSurfaceArea()
{
        return PI*radius*(radius+sqrt(radius*radius + height*height));
}

double Cone::getVolume()
{
    return PI * radius * radius * height/3;
}
