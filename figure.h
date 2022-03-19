#pragma once
#include <math.h>

#define DATA_ERROR 1

class Figure{

protected:
    
public:
    virtual double Space() = 0;
    virtual double Perimeter() = 0;
    virtual int TestMySides() = 0;
    virtual Figure* Clone() = 0;
};

class Triangle : public Figure{

private:
    double a;
    double b;
    double c;

public:
    Triangle(double,double,double);
    Figure* Clone();

    int TestMySides();

    double GetA();
    double GetB();
    double GetC();

    double Perimeter();
    double Space();
}; 

class Prism {

protected:
    Figure* base;
    double h;
public:

    Prism(double, Figure*);

    ~Prism();

    virtual double GetH() = 0;

    virtual double BaseSpace() = 0;
    virtual double FullSpace() = 0;
    virtual double Volume() = 0;
};

class TrianglePrism : public Prism {
public:
    TrianglePrism(double new_h, Figure* new_base) : Prism(new_h,new_base){};

    double GetA();
    double GetB();
    double GetC();

    double GetH();

    double FullSpace();
    double BaseSpace();
    double Volume();
    
};
