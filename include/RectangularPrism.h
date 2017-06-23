#ifndef RECTANGULARPRISM_H
#define RECTANGULARPRISM_H


class RectangularPrism
{
    public:
        RectangularPrism();
        RectangularPrism(double l, double w, double h);
        double getSurfaceArea();
        double getVolume();
    private:
        double length,width,height;
};

#endif // RECTANGULARPRISM_H
