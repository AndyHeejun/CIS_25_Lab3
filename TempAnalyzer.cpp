#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main(){

    double temp;
    double sum = 0;
    int count = 0;

    ifstream file("temperature.txt");

    while (file >> temp) {
        sum += temp;
        count++;
    }

    double average = sum / count;


    cout << "Temperatures analyzed for " << count << " days." << endl;
    cout << fixed << setprecision(1);
    cout << "The average temperature was: " << average << endl;



    file.close();
    return 0;
}