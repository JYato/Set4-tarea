#ifndef Poligono_h
#define Poligono_h
#include "point.h"
#include "pointarray.h"

class Polygon{
protected:
    PointArray pol;
    int number;
public:
    Polygon();
    Polygon(const Point* arreglo1, const int tamano);
    virtual double area()=0;
    int getnumpoligonos();
    int getnumsides();
    const PointArray *getpoints();
    ~Polygon();
};

class Rectangle:public Polygon{
private:
    Point punto1;
    Point punto2;
    Point punto3;
    Point punto4;
public:
    Rectangle(Point punt1,Point punt3);
    Rectangle(const int a,const int b,const int c, const int d);
    void printrect();
    double area();

};

class Triangle:public Polygon{
private:
    Point punto1;
    Point punto2;
    Point punto3;
public:
    Triangle(Point p1, Point p2, Point p3);
//    Triangle cast(Rectangle* rect);
    double area();
};

#endif
