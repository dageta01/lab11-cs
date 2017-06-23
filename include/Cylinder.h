#ifndef CYLINDER_H
#define CYLINDER_H


class Cylinder
{
    public:
        Cylinder();
        Cylinder(double r, double h);
        double getSurfaceArea();
        double getVolume();
    private:
        double radius;
        double height;
};

#endif // CYLINDER_H
