#include <iostream>
#include "RectangularPrism.h"
#include "Cone.h"
#include "Cylinder.h"

/*
Name        Tim Dager
Lab         Lab 11
Course      CS 229
Instructor  Parker
*/
enum user_choce {
    REC_DEF = 1,
    REC,
    CONE_DEF,
    CONE,
    CYL_DEF,
    CYL,
    EXIT
};

// does basic geometry

int main()
{
    using namespace std;
    int choice;

    cout << "\nSelect your shape:" << endl;
    cout << "1. Rectangular prism default" << endl;
    cout << "2. Rectangular Prism" << endl;
    cout << "3. Cone default" << endl;
    cout << "4. Cone" << endl;
    cout << "5. Cylinder default " << endl;
    cout << "6. Cylinder " << endl;
    cout << "7. Exit" << endl;
    cin >> choice;

    switch(choice)
    {
    case REC_DEF:{
        RectangularPrism rectPrism;
        cout << "\nSurface area is: " << rectPrism.getSurfaceArea() << endl;
        cout << "Volume is: " << rectPrism.getVolume() << endl;
        break;
    }
    case REC:{
        double pLength, pWidth, pHeight;
        cout << "\nEnter rectangular prism's length: ";
        cin >> pLength;
        cout << "Enter rectangular prism's width: ";
        cin >> pWidth;
        cout << "Enter rectangular prism's height: ";
        cin >> pHeight;

        RectangularPrism rectPrism(pLength,pWidth,pHeight);
        cout << "\nSurface area is: " << rectPrism.getSurfaceArea() << endl;
        cout << "Volume is: " << rectPrism.getVolume() << endl;
        break;
    }
    case CONE_DEF:{
        Cone cone;
        cout << "\nSurface area is " << cone.getSurfaceArea() << endl;
        cout << "Volume is " << cone.getVolume() << endl;
        break;
    }
    case CONE:{
        double radius, height;
        cout << "\nEnter the cone's radius: ";
        cin >> radius;
        cout << "Enter the cone's height: ";
        cin >> height;

        Cone cone(radius, height);
        cout << "\nSurface area is: " << cone.getSurfaceArea() << endl;
        cout << "Volume is: " << cone.getVolume() << endl;
        break;
    }
    case CYL_DEF:{
        Cylinder cylinder;
        cout << "\nSurface area is: " << cylinder.getSurfaceArea() << endl;
        cout << "Volume is: " << cylinder.getVolume() << endl;
        break;
    }
    case CYL:{
        double radius, height;
        cout << "\nEnter cylinder's radius: ";
        cin >> radius;
        cout << "Enter cylinder's height: ";
        cin >> height;

        Cylinder cylinder(radius, height);
        cout << "\nSurface area is: " << cylinder.getSurfaceArea() << endl;
        cout << "Volume is: " << cylinder.getVolume() << endl;
        break;
    }
    case EXIT:
        break;
    default: // left in for sanity
        cout << "\nYou should not be seeing this!" << endl;
    }

    return 0;
}
