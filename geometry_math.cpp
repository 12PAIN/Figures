#include "figure.h"

// Все вычисления для фигур в этом файле


///// ТРЕУГОЛЬНИК ////////

double Triangle::Space(){
    double p = (a+b+c)/2.;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

double Triangle::Perimeter(){
    return a+b+c;
}

//// ТРЕУГОЛЬНАЯ ПРИЗМА ////

double TrianglePrism::BaseSpace(){
    return base->Space();
}

double TrianglePrism::FullSpace(){
    double base_space = base->Space();
    return base->Space()*2 + base->Perimeter()*h;
}

double TrianglePrism::Volume(){
    return base->Space()*h;
}