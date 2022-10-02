#include "figure.h"
#include <iostream>

int main(){
    //std::cout << 1;

    Figure* new_figure = new Circle(5);
    Prism* new_prism = new TrianglePrism(5,new_figure);
    //delete new_figure;
    
    Circle* new_tri = static_cast<Circle*>(new_figure);
    Cylinder* prism = static_cast<Cylinder*>(new_prism);

    std::cout << prism->GetR() << std::endl;

    std::cout << prism->BaseSpace();    
    
    return 0;
};



















