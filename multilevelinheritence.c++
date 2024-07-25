using namespace std;
#include<iostream>

class Grandparents{
    public:

    string name;
    
    void put_name(string a){
        name=a;
    }

    void get_name(){
        cout<<"The name you have entered is : "<<name<<"\n";
    }
};

class Parent:public Grandparents{
    public:
    
    int age;

    void put_age(int b){
        age=b;
    }

    void get_age(){
        cout<<"The age you have entered is : "<<age<<"\n";
    }
};

class Child:public Parent{
    public:

    string gender;

    void put_gender(string c){
        gender=c;
    }

    void get_gender(){
        cout<<"The gender you have entered is : "<<gender<<"\n";
    }
};
int main()
{
    Child a1;
    a1.put_name("Ram");
    a1.put_age(12);
    a1.put_gender("Male");
    cout<<"\n";
    a1.get_name();
    cout<<"\n";
    a1.get_age();
    cout<<"\n";
    a1.get_gender();
    cout<<"\n";
    return 0;
}