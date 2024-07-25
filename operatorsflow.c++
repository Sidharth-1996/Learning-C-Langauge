using namespace std;
#include<iostream>
int main(){
    int a,b,c=0;
    cout<<"Enter the first number :\n";
    cin>>a;
    cout<<"Enter the second number : \n";
    cin>>b;
    cout<<++a <<"\n" <<b++<<"\n";
    cout<<a+b <<"\n";
    cout<<((a>b)?a:b)<<"\n";
    cout<<(a<b)<<"\n";
    cout<<(true&&false)<<" "<<(true||false)<<" "<<(true&&true)<<"\n";
    cout<<(c=c+=a)<<"\n";
    cout<<c;
    return 0;
}