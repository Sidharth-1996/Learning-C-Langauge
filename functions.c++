using namespace std;
#include<iostream>

int add(int a,int b){
    return a+b;
}

int main(){
    int a,b;
    cout<<"Enter the numbers you want to add :- \n";
    cout<<"Enter the first number : \n";
    cin>>a;
    cout<<"Enter the second number : \n";
    cin>>b;
    cout<<"The sum of the two numbers is "<<add(a,b);
    return 0;
}