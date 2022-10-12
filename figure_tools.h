#pragma once
#include "figure.h"
#include <vector>

#define TYPE_TRIANGLEPRISM 1
#define TYPE_CYLINDER 0

Figure* createFigure(double,double,double);
Figure* createFigure(double);

Prism* createPrism(double, Figure*, int type);

TrianglePrism* getCastedTrianglePrism(Prism*);
Cylinder* getCastedCylinder(Prism*);
Circle* getCastedCircle(Figure*);
Triangle* getCastedTriangle(Figure*);


class PrismCollection{

private:

    unsigned short N = -1;
    std::vector <Prism*> shapes;

public:

    void AddPrism(Prism*); //Добавление элелемента
    void DelPrism(); // Удаление последнего элемента
    Prism* GetPrism(int);  // Получение фигуры по номеру

    double getNumber();

    ~PrismCollection();

};



