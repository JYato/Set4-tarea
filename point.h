#ifndef Point_h
#define Point_h

class Point{
public:
    Point();
    Point(double nx, double ny);
    Point(Point &n);
    void setx_y(double nx, double ny);
    double getx();
    double gety();
    void printpoint();
    void modifypoint(double nx, double ny);
private:
    double x,y;
};
#endif
