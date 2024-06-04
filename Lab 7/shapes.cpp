#include "shapes.h"

namespace shapes {
    Square::Square(){
        sideLength=0;
    }
    Square::Square(float length){
        sideLength=length;
       }
       Square::~Square(){}
       
       float Square::getsideLength(){      
          return sideLength;
       }
       void Square::setsideLength(float length){
        sideLength=length;
       }
       Triangle::Triangle(){
        base=0;
        height=0;
        }
        Triangle::Triangle(float basevalue ,float heightvalue){
            base=basevalue;
            height=heightvalue;
        }Triangle::~Triangle(){}

        float Triangle::getbase(){
            return base;
        }
        float Triangle::getheight(){
            return height;
        }
        void Triangle::setbase(float basevalue){
            base=basevalue;
        }
        void Triangle::setheight(float heightvalue){
            height=heightvalue;
        }
        Circle::~Circle(){}

        float Circle::getradius(){
            return radius;
        }
        void Circle::setradius(float radiusvalue){
            radius=radiusvalue;
        }
};