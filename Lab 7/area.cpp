#include "area.h"
#include "shapes.h"
#include <cmath>

 float Area::findSquareArea(shapes::Square square){
    return square.getsideLength()*square.getsideLength();
}

float Area::findTriangleAreas(shapes::Triangle triangle){
    return 0.5*triangle.getbase()*triangle.getheight();
}

float Area::findCircleArea(shapes::Circle circle){
return 3.14159*circle.getradius()*circle.getradius();

}