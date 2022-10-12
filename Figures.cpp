#include "figure_tools.h"
#include <iostream>

int main(){
    //std::cout << 1;

    Figure* new_figure = createFigure(5);
    Prism* new_prism = createPrism(5,new_figure, TYPE_CYLINDER);
    //delete new_figure;
    
    Circle* new_tri = getCastedCircle(new_figure);
    Cylinder* prism = getCastedCylinder(new_prism);

    std::cout << prism->GetR() << std::endl;

    std::cout << prism->BaseSpace();    
    
    return 0;
};



















