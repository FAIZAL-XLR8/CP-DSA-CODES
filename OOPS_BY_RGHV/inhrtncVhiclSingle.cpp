#include <bits/stdc++.h>
using namespace std;

//single Inheritance     
class Vehicle {
    public :
    int topSpeed;
    int gears;
    float mileage;
};
class Bike : public Vehicle {
    int price;
    int seat;
};
class Truck : public Vehicle {
    int seats;
    int horns;
};