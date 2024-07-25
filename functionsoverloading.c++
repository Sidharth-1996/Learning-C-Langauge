using namespace std;
#include<iostream>
double add(double a,double b){
    return a+b;
}
int add(int a,int b){
    return a+b;
}
int main(){
    cout<<"The output of the 'add(double)' function is "<<add(12.3,2.4);
    cout<<"\n";
    cout<<"The output of the 'add(int)' function is "<<add(1,2);
}