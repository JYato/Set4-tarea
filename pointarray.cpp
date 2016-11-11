#include <iostream>
#include <new>
#include "point.h"
#include "pointarray.h"
using namespace std;

PointArray::PointArray()
{
    size1 = 0;
    arreglo = new Point[size1];
}

PointArray::PointArray(const Point points[], const int sizee)
{
    size1 = sizee;
    arreglo = new Point[size1];
    for(int i=0;i<size1;i++)
        arreglo[i] = points[i];
}
PointArray::PointArray(const PointArray &n)
{
    size1 = n.size1;
    arreglo = new Point[size1];
    for(int i=0;i<size1;i++)
        arreglo[i]=n.arreglo[i];
}

void PointArray::resizer(const int tamano)
{
    PointArray pts;
    pts.arreglo = new Point[tamano];
    for(int x=0; x< size1; x++){
        pts.arreglo[x]=arreglo[x];
    }
}
void PointArray::append(const Point& nuevo)
{
    Point *temp = new Point[size1];
    temp = arreglo;
    size1+=1;
    arreglo = new Point[size1];
    for(int i=0; i<size1-1;i++){
        arreglo[i]=temp[i];
    }
    delete[] temp;
    arreglo[size1-1]=nuevo;
}
void PointArray::insertar(const int pos, const Point &nuevo)
{
    int i;
    for(i=0;i<pos;i++)
        ;
    arreglo[i]=nuevo;

}
void PointArray::eliminar(const int pos)
{
    int i;
    for(i=0;i<=pos;i++)
        ;
    delete &arreglo[i];
    size1-=1;
}
const int PointArray::getsize()
{
    return size1;
}
void PointArray::printpointarray()
{
    cout << "{";
    for(int i=0;i<size1;i++){
        arreglo[i].printpoint();
    }
    cout << "}" << endl;
}

void PointArray::modifpuntos(const int pos, Point nuevo)
{
    arreglo[pos]=nuevo;
}

void PointArray::limpiar()
{
    delete[] arreglo;
    size1=0;
}
PointArray::~PointArray()
{
    delete[] arreglo;
    size1=0;
}
