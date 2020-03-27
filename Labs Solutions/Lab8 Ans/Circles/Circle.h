#ifndef CIRCLE_H
#define CIRCLE_H

#include<string>
using namespace std;

class Circle{

    public :

       Circle();
       Circle(float diam);
       float getArea() const;
       float getDiameter() const ;
       static float gettotalarea();
       float set_diameter(float diam);



    private :

       static float totalarea;
       float diameter ;
       float area ;


};

#endif // CIRCLE_H
