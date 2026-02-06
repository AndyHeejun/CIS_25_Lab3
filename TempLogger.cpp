#include <iostream>
#include <fstream>
using namespace std;

int main(){

ofstream file("temperature.txt");

int days;
double temp;

cout << "How many days of temperature would you like to record? " << endl;
cin >> days;

for (int i = 1; i <= days; i++){
    cout << "Enter temperature for day " << i << ": ";
    cin >> temp;
    file << temp << endl;
}

    file.close();
    return 0;
}