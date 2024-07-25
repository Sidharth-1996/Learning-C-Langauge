using namespace std;
#include<iostream>

class Student{
    public: //it can be public ,private and protected

    int id;
    string name;
    void get_details(){
        cout<<"id : "<<id<<"\n";
        cout<<"name : "<<name<<"\n";
    }

};

int main(){
    //  Student a;
    //  a.id=1;
    //  a.name="Varun";
    //  a.get_details();
    Student s1;
    s1.id=1;
    s1.name="Varun";
    s1.get_details();

    return 0;
}