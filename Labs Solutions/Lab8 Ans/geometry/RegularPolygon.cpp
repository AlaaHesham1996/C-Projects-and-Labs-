#include "RegularPolygon.h"
#include <math.h>

    RegularPolygon::RegularPolygon(): n{3}, side{1}, x{0}, y{0} {}

    RegularPolygon::RegularPolygon(int no, double sideL) : x{0}, y{0} {

        n= no ; side =sideL ;
    }
    RegularPolygon::RegularPolygon(int no, double sideL, double x1,double y1){

        n= no ; side =sideL ; x= x1 ; y=y1 ;

    }
    int RegularPolygon::getN() const{
        return n;
    }
    double RegularPolygon::getsideL() const{
        return side;
    }
    double RegularPolygon::getX() const{
        return x;
    }
    double RegularPolygon::getY() const{
        return y;
    }
    void RegularPolygon::setN(int n1)  {
        n=n1 ;
    }
    void RegularPolygon::setsideL(double side1) {
        side=side1 ;
    }
    void RegularPolygon::setX(double x1) {
        x=x1 ;
    }
    void RegularPolygon::setY(double y1) {
        y=y1 ;
    }
    double RegularPolygon::getPerimeter() const{
        return n*side ;
    }
    double RegularPolygon::getArea() const{
       return (n*pow(side, 2.0))/(4*tan(3.14/n)) ;
    }


