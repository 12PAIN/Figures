 #include "figure.h"
 #include "cmath"

// Все вычисления для фигур в этом файле


///// ТРЕУГОЛЬНИК ////////

double Triangle::Space(){
    double p = (a+b+c)/2.;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

double Triangle::Perimeter(){
    return a+b+c;
}

//// ОКРУЖНОСТЬ ////

double Circle::Perimeter(){
    return 2* M_PI * R;
}

double Circle::Space(){
    return M_PI * R * R;
}


////ПРИЗМА////

double Prism::BaseSpace(){
    return base->Space();
}

double Prism::FullSpace(){
    double base_space = base->Space();
    return base->Space()*2 + base->Perimeter()*h;
}

double Prism::Volume(){
    return base->Space()*h;
}