using namespace std;
#include<iostream>
int main(){
    string a="Sidharth Sharma";
    string *ptr = &a;
    cout<<"Value of the variable a : "<<a;
    cout<<"\n";
    cout<<"Address of the variable a : "<<ptr;
    cout<<"\n";
    cout<<"The value of te variable ptr is "<<*ptr;
    return 0;
}