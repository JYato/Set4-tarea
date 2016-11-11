#ifndef Pointarray_h
#define Pointarray_h
#include "point.h"

class PointArray{
public:
    PointArray();
    PointArray(const Point points[], const int sizee);
    PointArray(const PointArray &p);

    void append(const Point &nuevo);
    void insertar(const int pos, const Point &nuevo);
    void eliminar(const int pos);
    const int getsize();
    void printpointarray();
    void modifpuntos(const int pos, Point nuevo);
    void limpiar();
    virtual ~PointArray();

private:
    Point *arreglo;
    int size1;
    void resizer(const int tamano);
};
#endif
