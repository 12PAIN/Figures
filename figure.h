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
    virtual Figure* Clone();

    int TestMySides();

    double GetA();
    double GetB();
    double GetC();

    double Perimeter();
    double Space();
}; 

class Circle : public Figure{

private:

    double R;

public:
    Circle(double);
    virtual Figure* Clone();

    double GetR();
    int TestMySides();

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

    virtual double GetH();

    virtual int TestHeight();

    virtual double BaseSpace();
    virtual double FullSpace();
    virtual double Volume();
};

class TrianglePrism : public Prism {
public:
    TrianglePrism(double new_h, Figure* new_base) : Prism(new_h,new_base){};

    double GetA();
    double GetB();
    double GetC();

    //double GetH();

    //double FullSpace();
    //double BaseSpace();
    //double Volume();
    
};

class Cylinder : public Prism{
public:
    Cylinder(double new_h, Figure* new_base) : Prism(new_h,new_base){};

    double GetR();

};
