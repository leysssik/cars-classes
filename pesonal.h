#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
#include<map>
#include <sstream>
using namespace std;
class Car 
{
public:
	Car(string _marka;string _model;string _color;int _year;int _speed;int _power);
	void Vivod();
	void SetcolorCar(string color);
	~Car();

private:
	string marka;
	string model;
	string color;
	int year;
	int speed;
	int power;
};


