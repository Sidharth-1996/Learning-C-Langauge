using namespace std;
#include<iostream>

class Student{
    public:        //access specifier

    int id;
    string name;

    void put_details(int a,string b){
        id=a;
        name=b;
    }

    void get_details(){
        cout<<"id : "<<id;
        cout<<"\n";
        cout<<"name : " <<name; 
    }

};

int main()
{
    Student s1;
    int a;
    string b;
    cout<<"Enter the id of the student : \n";
    cin>>a;
    cout<<"\n";
    cout<<"Enter the name of the student : \n";
    cin>>b;
    s1.put_details(a,b);
    s1.get_details();    
    return 0;
}