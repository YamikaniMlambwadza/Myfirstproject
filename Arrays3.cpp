#include <iostream>
#include <string>
using namespace std;
int main(){
    //Declare and initialize the array
    string array [] ={"B123","C234","A345","C15","B177","G3003","C235","B179"};
    int arraySize = sizeof(array)/ sizeof(array[0]);
    //Iterate through each element of the array
    for(int i = 0; i < arraySize; ++i){
        //Check if the current element starts with 'B'
        if(array[i][0] == 'B'){
            //Output the element onto the console
            cout<< array[i]<<endl;
        }
    }
    return 0;
}