#include "Car.h"
#include<iostream>
#include<String>
using namespace std;

Car::Car()
	:mark(), model(),color(), max_speed(0)
{
}
Car::Car(const std::string& mar, const std::string& mod, const std::string& col, int maxs)
	: mark(mar), model(mod), color(col), max_speed(maxs)
{
}

void Car::scanCar() {
    
    string mar;
    string mod;
    string col;
    int maxs;
    cout << "Enter Mark: " << endl;
    std::cin >> mar;
    setMark(mar);
    cout << "Enter Model: " << endl;
    std::cin >> mod;
    setModel(mod);
    cout << "Enter Color: " << endl;
    std::cin >> col;
    setColor(col);
    cout << "Enter Maximum speed (km/h): " << endl;
    std::cin >> maxs;
    setMaxSpeed(maxs);
    cout << "------------------------------------------" << endl<<endl;
    return setColor(col), setMark(mar), setMaxSpeed(maxs), setModel(mod);
}

void displayCar(Car c) {
	cout << "Mark: " << c.getMark() << "\t";
	cout << "Model: " << c.getModel() << "\t";
	cout << "Color: " << c.getColor() << "\t";
	cout << "Maximum Speed: " << c.getMaxSpeed()<<"km/h" << endl;
}

