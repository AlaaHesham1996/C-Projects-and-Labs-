#ifndef REGULARPOLYGON_H
#define REGULARPOLYGON_H

class RegularPolygon{
public :

    RegularPolygon();
    RegularPolygon(int no, double sideL);
    RegularPolygon(int no, double sideL, double x1,double y1);
    int getN() const;
    double getsideL() const, getX() const, getY() const;
    void setN(int n1) , setsideL(double side1) , setX(double x1) , setY(double y1) ;
    double getPerimeter() const;
    double getArea() const ;


private :

int n;
double x,y,side;


};

#endif // REGULARPOLYGON_H
