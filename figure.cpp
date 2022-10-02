#include "figure.h"

// В данном файле содержатся все функции, определяющие работу с классами. Здесь не будет функций, отвечающих за вычисления

//// ПРИЗМА ////

Prism::Prism(double h, Figure* base){
    this->h = h;
    this->base = base->Clone();
}

Prism::~Prism(){
    delete base;
}

double Prism::GetH(){
    return h;
}

int Prism::TestHeight(){
    if(h <= 0){
        return DATA_ERROR;
    }
    else{
        return 0;
    }
}

///// ОКРУЖНОСТЬ ////

Circle::Circle(double R){
    this->R = R;
}

int Circle::TestMySides(){
    if(R <= 0){
        return DATA_ERROR;
    }
    else{
        return 0;
    }
}

double Circle::GetR(){
    return R;
}

Figure* Circle::Clone(){
    return new Circle(this->R);
}

///// ТРЕУГОЛЬНИК ////

Triangle::Triangle(double a, double b, double c){
    this->a = a;
    this->b = b;
    this->c = c;
}

int Triangle::TestMySides(){
    if (a + b >= c && a + c >= b && b + c >= a && a > 0 && b > 0 && c > 0) { return 0; }
    else return DATA_ERROR;
}

Figure* Triangle::Clone(){
    return new Triangle(a,b,c);
}

double Triangle::GetA(){
    return a;
}

double Triangle::GetB(){
    return b;
}

double Triangle::GetC(){
    return c;
}


//// ТРЕУГОЛЬНАЯ ПРИЗМА ////

double TrianglePrism::GetA(){
    Triangle* temp_triangle = static_cast<Triangle*>(base);
    return temp_triangle->GetA();
}

double TrianglePrism::GetB(){
    Triangle* temp_triangle = static_cast<Triangle*>(base);
    return temp_triangle->GetB();
}

double TrianglePrism::GetC(){
    Triangle* temp_triangle = static_cast<Triangle*>(base);
    return temp_triangle->GetC();
};

//// ЦИЛИНДР ////

double Cylinder::GetR(){
    Circle* tmpCircle = static_cast<Circle*>(base);
    return tmpCircle->GetR();
}