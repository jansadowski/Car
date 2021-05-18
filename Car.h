#pragma once
#include <iostream>
#include<string>
#include <fstream>

using namespace std;
class Car
{
public:
	Car(const std::string& mar, const std::string& mod, const std::string& col, int maxs);
	Car();
	void setMark(string mar) { mark = mar; }
	void setModel(string mod) { model = mod; }
	void setColor(string col) { color = col; }
	void setMaxSpeed(int maxs) { max_speed = maxs; }
	string getMark()const { return mark; }
	string getModel()const { return model; }
	string getColor()const { return color; }
	int getMaxSpeed()const { return max_speed; }
	void scanCar();
	
	
private:
	string mark;
	string model;
	string color;
	int max_speed;
};

void displayCar(Car c);
