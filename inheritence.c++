//single inheritence
using namespace std;
#include<iostream>

class Vehicle{
    public:

    int milege=30;
    int cost=500;

    void put_vehicle_details(){
        cout<<"I am a vehicle";
        cout<<"\nMilege of the vehicle is "<<milege;
        cout<<"\nCost of the vehicle is "<<cost;
    }
};

class Car:public Vehicle{
    public:

    string colour="red";
    int tyres=4;

    void show_car_details(){
        cout<<"I am a car\n";
        cout<<"colour of the car is : "<<colour<<"\n";
        cout<<"Number of tyres in the car is : "<<tyres<<"\n";
    }
};

int main()
{
    Car c1;
    c1.put_vehicle_details(); //here we are accessing the method of parent class using a child class
    return 0;
}