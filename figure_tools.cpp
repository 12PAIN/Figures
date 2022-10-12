#include "figure_tools.h"

Figure* createFigure(double a, double b, double c){
    return new Triangle(a,b,c); 
}

Figure* createFigure(double R){
    return new Circle(R);
}

Prism* createPrism(double h, Figure* base, int type){
    if(type == TYPE_CYLINDER){

        return new Cylinder(h, base);

    }
    else if(type == TYPE_TRIANGLEPRISM){

        return new TrianglePrism(h,base);

    }

}

TrianglePrism* getCastedTrianglePrism(Prism* objPrism){
    return static_cast<TrianglePrism*>(objPrism);
}

Cylinder* getCastedCylinder(Prism* objPrism){
    return static_cast<Cylinder*>(objPrism);
}

Circle* getCastedCircle(Figure* objFig){
    return static_cast<Circle*>(objFig);
}

Triangle* getCastedTriangle(Figure* objFig){
    return static_cast<Triangle*>(objFig);
}