#include "figure.h"
#include <iostream>

int main(){
    //std::cout << 1;

    Figure* new_figure = new Triangle(1,1,1);
    Prism* new_prism = new TrianglePrism(5,new_figure);
    delete new_figure;
    
    std::cout << new_prism->BaseSpace();    
    
    return 0;
};



















