#include<iostream>
using namespace std;
int main (){
    int* pPointer = nullptr;
    int numebersArray[3] = {10, 20,30};
    pPointer = numebersArray;
    cout<<"Address at pPointer: "<< numebersArray<<endl;
    cout<<"Address of numbersArray[0]:"<<numebersArray<<endl;
    cout<<"Value at pPointer:"<<*pPointer<<endl;
    cout<<"Values at ++pPointer:"<<*(++pPointer)<<endl;
    pPointer = numebersArray;
    cout<<"Value at pPointer++:"<<*(pPointer++)<<endl;
    return 0;
}
