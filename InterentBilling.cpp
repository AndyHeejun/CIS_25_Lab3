#include <iostream>
using namespace std;


int main(){

    string userPackage;
    int hoursUsed;

    cout << " Choose a package: A, B, C" << endl;
    cin >> userPackage;
    if (userPackage != "A" && userPackage != "a" && userPackage != "B" && userPackage != "b" && userPackage != "C" && userPackage != "c"){
        cout << "Error" << endl;
        return 0; 
    }

    cout << " Enter the number of hours you used: " << endl;
    cin >> hoursUsed;


    if( hoursUsed < 0 || hoursUsed > 744){
        cout << "Error" << endl;
        return 0; 
    }

    if(userPackage == "A" || userPackage == "a"){
        if(hoursUsed < 10){
            cout << "$9.95" << endl;
        }
        else{
            cout << "Your total amount due is $" << (hoursUsed - 10) * 2 + 9.95 << endl;
        }
    }

    else if(userPackage == "B" || userPackage == "b"){
        if(hoursUsed < 20){
            cout << "$14.95" << endl;
        }
        else{
            cout << "Your total amount due is $" << (hoursUsed - 10) + 14.95 << endl;
        }
    }

    else if(userPackage == "C" || userPackage == "c"){
        cout << "Your total amount due is $19.95" << endl;
    }


    return 0;
}