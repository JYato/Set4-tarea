#include <iostream>
#include <math.h>
#include "point.h"
#include "pointarray.h"
#include "poligono.h"
using namespace std;

Point constructorPoints [4];

Point * updateConstructorPoints ( const Point &p1 , const Point &p2 ,const Point &p3 , const Point &p4 )
{
    constructorPoints [0] = p1;
    constructorPoints [1] = p2;
    constructorPoints [2] = p3;
    constructorPoints [3] = p4;
    return constructorPoints ;
}

Polygon::Polygon()
{
    Point def[0];
    PointArray arrdef(def,0);
    pol = arrdef;
    number = 0;
}
Polygon::Polygon(const Point* arreglon,const int tamano)
{
    PointArray temp(arreglon,tamano);
    pol=temp;
    number+=1;
}

int Polygon::getnumpoligonos()
{
    return number;
}
int Polygon::getnumsides()
{
    return pol.getsize();
}
const PointArray* Polygon::getpoints()
{
    const PointArray *arregl = &pol;
    return arregl;
}

Polygon::~Polygon()
{
    delete &pol;
    number=0;
}
Rectangle::Rectangle(Point punt1, Point punt3)
{
    number+=1;
    Point temp[number];
    punto3=punt3;
    punto1=punt1;
    punto2.setx_y(punto1.getx(), punto3.gety());
    punto4.setx_y(punto3.getx(), punto1.gety());
    temp[0]=punto1;
    temp[1]=punto2;
    temp[2]=punto3;
    temp[3]=punto4;
    PointArray nuevo(temp,4);
    pol=nuevo;

}
Rectangle::Rectangle(const int a,const int b,const int c, const int d)
{
    number+=1;
    Point temp[4];
    punto1.setx_y(a,b);
    punto2.setx_y(a,c);
    punto3.setx_y(d,c);
    punto4.setx_y(d,b);
    temp[0]=punto1;
    temp[1]=punto2;
    temp[2]=punto3;
    temp[3]=punto4;
    PointArray nuevo(temp,4);
    pol=nuevo;
}
double Rectangle::area()
{
    double base = punto4.getx() - punto1.getx();
    double altura = punto2.gety() - punto1.gety();
    double area1 = base*altura;
    return area1;
}
void Rectangle::printrect()
{
    punto1.printpoint();
    punto2.printpoint();
    punto3.printpoint();
    punto4.printpoint();
    cout << endl;
}
Triangle::Triangle(Point p1,Point p2, Point p3)
{
    number +=1;
    Point temp[3];
    punto1=p1;
    punto2=p2;
    punto3=p3;
    temp[0]=punto1;
    temp[1]=punto2;
    temp[2]=punto3;
    PointArray nuevo(temp,3);
    pol = nuevo;
}
double Triangle::area()
{
    double contr_a = sqrt(pow((punto3.getx() - punto2.getx()),2)+pow((punto3.gety() - punto2.gety()),2));
    double contr_b = sqrt(pow((punto3.getx() - punto1.getx()),2)+pow((punto3.gety() - punto1.gety()),2));
    double contr_c = sqrt(pow((punto2.getx() - punto1.getx()),2)+pow((punto2.gety() - punto1.gety()),2));
    double s = (contr_a+contr_b+contr_c)/2;
    double res = sqrt(s*(s-contr_a)*(s-contr_b)*(s-contr_c));
    return res;
}
//Triangle Triangle::cast(Rectangle* rect)
//{
//    const PointArray temp;
//    temp = rect->getpoints();
//    this->punto1 = temp[0];
//    this->punto2 = temp[1];
//    this->punto3 = temp[2];;
//}
