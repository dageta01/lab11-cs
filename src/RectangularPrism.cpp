#include "RectangularPrism.h"


RectangularPrism::RectangularPrism(){
    length = 1;
    width = 1;
    height = 1;
}

RectangularPrism::RectangularPrism(double l, double w, double h)
{
    length = l;
    width = w;
    height = h;
}

double RectangularPrism::getSurfaceArea()
{
    return 2 * (width*length + height*width + length * height);
}

double RectangularPrism::getVolume(){
    return length*width*height;
}
