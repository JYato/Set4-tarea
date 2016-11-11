#include <iostream>
#include "point.h"
#include "pointarray.h"
#include "poligono.h"

using namespace std;

int main()
{
//    PointArray ptr;
//    ptr.printpointarray();
//    Point farr[5];
    Point a(3,4);
    Point bb(3.5,5);
    Rectangle* rect;
    Triangle* tri = dynamic_cast<Triangle *>(rect);
    cout << tri->area();
//    PointArray puntos(farr,7);
//    puntos.modifpuntos(6,bb);
//    puntos.printpointarray();
//    puntos.modifpuntos(6,a);
//    puntos.printpointarray();
//    Point rec1(3,4),rec3(4,5);
//    Rectangle rectangulo1(rec1,rec3);
//    rectangulo1.printrect();
//    Rectangle rectangulo2(1,2,3,4);
//    rectangulo2.printrect();
//    double res, res1;
//    res = rectangulo2.area();
//    cout << res << endl;
//    Point tri1(2,3),tri2(4,5),tri3(5,3);
//    Triangle triangulo1(tri1,tri2,tri3);
//    res1 = triangulo1.area();
//    cout << res1 << endl;
//cast : moldear
//    Rectangle* rect;
//    Triangle* tri;
//    tri->cast(rect);
    return 0;
}
//ptr= (int *)malloc(sizeof(int));
