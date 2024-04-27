#include <iostream>
#include <cstdlib> //Required for rand () and srand()
#include <ctime> //Required for time()
using namespace std;

int main(){
    // initialize random seed
    srand(time(0));

    //Generate a random number between 0 and 11
    int daysUntilExpiration = rand() % 12;

    //check the subscription status and output the appropriate message
    if(daysUntilExpiration == 0){
        cout<<"Your subscription has expired."<<endl;
    }else if (daysUntilExpiration == 1){
        cout<<"Your subscription expires within within a day!";
        cout<<"Renew now and save 20%!"<<endl;
    }else if (daysUntilExpiration <= 5){
        cout<<"Your subscription expires in"<<daysUntilExpiration<<"days";
        cout<<"Renew now and save 10%!"<<endl;
    } else if(daysUntilExpiration <=10){
        cout<<"Your subscription will expire soon.Renew now!"<<endl;
    }else{
        cout<<"You have an active subscription."<<endl;
    }
    return 0;
}

