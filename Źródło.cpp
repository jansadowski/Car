#include <iostream>
#include "Car.h"
#include <fstream>
#include <sstream>
using namespace std;

int main() {
   
   
    int n, i;
   size_t size;
    Car* c;
    cout << "Enter number of elements." << endl;
    cin >> n;
    c = new Car[1000];
    for (i = 0; i < n; i++)
    c[i].scanCar();

    ofstream myfile;
    myfile.open("DataBase.txt");
    
    myfile << "Mark:    " << "Model:    " << "Color:    " << "MaxSpeed:     " << endl;
    for (i = 0; i < n; i++)
        myfile <<i+1<<".        "<< c[i].getMark()<<"    " << c[i].getModel() << "   " << c[i].getColor() << "  " << c[i].getMaxSpeed() << endl;
    myfile.close();


    

   for(int i = 0; i< n; i++)
    displayCar(c[i]);
  
    return 0;
}


