#include<iostream>
#include<string>
using namespace std;

int main(){
    int* dynamicInt = new int;
    string* dynamicString = new string;

    cout<<"Enter an integer value:";
    cin>>*dynamicInt;
    
    cout<<"Enter a string value:";
    
 
    cin>>dynamicString;

    cout<<"The value of dynamically alloacted integer value:"<<*dynamicInt<<endl;
    cout<<"The value of dynamically allocated string value:"<<*dynamicString<<endl;

    delete dynamicInt;
    delete dynamicString;
    return 0;


}