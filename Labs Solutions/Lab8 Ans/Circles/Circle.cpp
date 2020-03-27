#include "Circle.h"
#include <iostream>
#include <cmath>

using namespace std ;

 float Circle::totalarea = 0 ;

 Circle::Circle(): diameter{0}{}

 Circle::Circle(float diam){

    set_diameter(diam);
 }


 float Circle::gettotalarea(){

    return totalarea ;
 }

float Circle::set_diameter(float diam){

diameter = diam ;
totalarea+=  3.14*pow((diameter/2),2.0);
}

float Circle::getArea() const{

    return 3.14*pow((diameter/2),2.0);
}

float Circle::getDiameter() const {

    return diameter ;
}
