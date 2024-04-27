#include <iostream>
#include <cmath>
using namespace std;

void calculateTriangleArea(){
    double base;
    double height;
    cout <<"Enter the base of the triangle:";
    cin>> base;
    cout<< "Enter the height of the triangle:";
    cin>> height;
    double area = 0.5 * base * height;
    cout<<"The area of triangle is:"<<area<< endl;
}
void calculateRectangleArea(){
    double length;
    double width;
    cout<<"Enter the lenght of the rectangle:";
    cin>> length;
    cout<<"Enter the width of the rectangle:";
    cin>>width;
    double area = length * width;
    cout<<"The area of a rectangle is:"<< area<<endl;
}
void calculateSquareArea(){
    double side;
    cout<<"Enter the side of the square:";
    cin>>side;
    double area = side *side;
    cout<<"The area of a square is:"<<area<<endl;
}

int main(){
 int choice;
 do{
    cout<<"Select a shape to calculate the area:"<<endl;
    cout<<"1. Triangle"<<endl;
    cout<<"2. Rectangle"<<endl;
    cout<<"3. Square"<<endl;
    cout<<"4. exitting the program"<<endl;
    cout<<"Enter selection"<<endl;
    cin>>choice;
    switch(choice){
        case 1:
        calculateTriangleArea();
        break;
        case 2:
        calculateRectangleArea();
        break;
        case 3:
        calculateSquareArea();
        break;
        default:
        cout<<"Invalid input. please try again."<<endl;

    }
 }while (choice = 4);
 cout<<"The program  has been exited. Thank you"<<endl;

 return 0;   
}





 

