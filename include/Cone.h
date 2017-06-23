#ifndef CONE_H
#define CONE_H

class Cone
{
    public:
        Cone();
        Cone(double r, double h);
        double getSurfaceArea();
        double getVolume();

    protected:

    private:
        double radius, height;
};

#endif // CONE_H
