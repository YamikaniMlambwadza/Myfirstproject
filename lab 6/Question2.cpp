#include <iostream>
using namespace std;

int main(){
    int numRows, numCols;
    cout <<"Enter the number of rows (maximum 3):";
    cin>>numRows;

    if(numRows <=0 or numRows>3){
        cout <<"Invalid number of rows.Please enter a value between 1 and 3.:"<<endl;
return 1;
    } 
    cout<<"Enter the number of columns (maximum 3):";
    cin>>numcols

    if(numcols<=0 or numcols>3){
        cout<<"Invalid number of columns. Please enter value between 1 and 3."<<endl;
        return 1;
    }
    double**myArray = new double*[numRows];
    for(int i = 0; i<numRows; ++i){
        for(int j = 0;j<numCols; ++j){
            cout<<"Enter value of element at rows"<<i+1<<"columns"<<j+1<<":";
            cin>>myArray[i][j];

        }
    }
    cout<<"Array values"<<endl;
    for(int i = 0; i<numRows; ++i){
        for(int j = 0; j<numCols; ++j){
            cout<<myArray[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i = 0; i<numRows; ++i){
        delete[]myArray[i];

    }
    delete[]myArray;
    return 0;
}